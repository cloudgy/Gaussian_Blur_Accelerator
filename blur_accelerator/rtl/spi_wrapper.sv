//------------------------------------------------------------------------------
// spi_wrapper.sv
// very simple 8-bit SPI slave, mode 0 (CPOL=0, CPHA=0)
// keywords:
//   SCLK – SPI clock
//   SDI  – Serial Data In (peripheral-in / controller-out, aka PICO)
//   SDO  – Serial Data Out (peripheral-out / controller-in, aka POCI)
//   CS   – Chip Select (active low)
//------------------------------------------------------------------------------
module spi_wrapper (
  input  logic       clk,        // core clock
  input  logic       rst_n,      // active-low reset (async)
  input  logic       SCLK,       // SPI clock from master
  input  logic       SDI,        // data in from master (PICO)
  input  logic       CS,         // chip-select, active-low
  output logic       SDO,        // data out to master (POCI)
  output logic       pixel_vld,  // one-cycle pulse when pixel_in is ready
  output logic [7:0] pixel_in    // the 8-bit received pixel
);

  // synchronize CS & SCLK to clk
  logic cs_d, sclk_d, sclk_q;
  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      cs_d   <= 1;
      sclk_q <= 0;
      sclk_d <= 0;
    end else begin
      cs_d   <= CS;
      sclk_d <= sclk_q;
      sclk_q <= SCLK;
    end
  end

  // shift register + bit counter
  logic [7:0] shift;
  logic [2:0] bitcnt;
  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      shift     <= 8'd0;
      bitcnt    <= 3'd0;
      pixel_vld <= 1'b0;
      pixel_in  <= 8'd0;
    end else begin
      pixel_vld <= 1'b0;
      if (cs_d) begin
        // CS high: idle
        bitcnt <= 3'd0;
      end else begin
        // on rising edge of SCLK
        if (sclk_q && !sclk_d) begin
          shift  <= { shift[6:0], SDI };
          bitcnt <= bitcnt + 1;
          if (bitcnt == 3'd7) begin
            // one full byte
            pixel_in  <= { shift[6:0], SDI };
            pixel_vld <= 1'b1;
            bitcnt    <= 3'd0;
          end
        end
      end
    end
  end

  // if you don’t need to send anything back
  assign SDO = 1'b0;

endmodule

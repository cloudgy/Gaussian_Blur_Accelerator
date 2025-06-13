`ifndef GAUSSIAN_BLUR_SV
`define GAUSSIAN_BLUR_SV

//------------------------------------------------------------------------------
// Module: gaussian_blur
// Description: Applies a Gaussian blur to a 3×3 pixel window.
//------------------------------------------------------------------------------

module gaussian_blur (
  input  logic        clk,
  input  logic        rst_n,
  input  logic [7:0]  pixel_in,
  input  logic        pixel_vld,
  output logic [7:0]  pixel_out,
  output logic        pixel_vld_out
);

  // Frame dimensions
  localparam int IMG_W = 32;
  localparam int IMG_H = 24;

  // Window generator taps
  logic [7:0] w00, w01, w02;
  logic [7:0] w10, w11, w12;
  logic [7:0] w20, w21, w22;

  /* verilator lint_off WIDTHEXPAND */
  window_gen #(
    .DATA_W(8),
    .IMG_W (IMG_W)
  ) win0 (
    .clk       (clk),
    .rst_n     (rst_n),
    .pixel_in  (pixel_in),
    .pixel_vld (pixel_vld),
    .w00       (w00), .w01(w01), .w02(w02),
    .w10       (w10), .w11(w11), .w12(w12),
    .w20       (w20), .w21(w21), .w22(w22)
  );
  /* verilator lint_on WIDTHEXPAND */

  // Convolution accumulator
  logic [15:0] mac_sum;
  always_comb begin
    mac_sum = {{8{1'b0}}, w00}       + ({{8{1'b0}}, w01} << 1) + {{8{1'b0}}, w02}
            + ({{8{1'b0}}, w10} << 1) + ({{8{1'b0}}, w11} << 2) + ({{8{1'b0}}, w12} << 1)
            + {{8{1'b0}}, w20}       + ({{8{1'b0}}, w21} << 1) + {{8{1'b0}}, w22};
  end

  // two‐stage pipeline
  logic [1:0] vld_pipe;
  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n)
      vld_pipe <= 2'b0;
    else
      vld_pipe <= {vld_pipe[0], pixel_vld};
  end

  // first‐row flag pipelined to align with output
  logic [1:0] row0_pipe;
  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n)
      row0_pipe <= 2'b0;
    else
      row0_pipe <= {row0_pipe[0], (row_cnt == 0)};
  end

  // counters to detect frame position
  logic [$clog2(IMG_W)-1:0] col_cnt;
  logic [$clog2(IMG_H)-1:0] row_cnt;
  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      col_cnt <= '0;
      row_cnt <= '0;
    end else if (pixel_vld) begin
      /* verilator lint_off WIDTHEXPAND */
      if (col_cnt == IMG_W-1) begin
        col_cnt <= '0;
        row_cnt <= (row_cnt == IMG_H-1) ? '0 : row_cnt + 1;
      end else begin
        col_cnt <= col_cnt + 1;
      end
      /* verilator lint_on WIDTHEXPAND */
    end
  end

  // Output register + conditional normalization on first row
  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      pixel_out     <= '0;
      pixel_vld_out <= 1'b0;
    end else begin
      /* verilator lint_off WIDTHTRUNC */
      if (row0_pipe[1]) begin
        // first row: only bottom‐row taps valid → weights sum=4 → divide by 4
        pixel_out <= mac_sum[9:2];   // equivalent to mac_sum >> 2
      end else begin
        // all other rows: full 3×3 → weights sum=16 → divide by 16
        pixel_out <= mac_sum[11:4];  // equivalent to mac_sum >> 4
      end
      /* verilator lint_on WIDTHTRUNC */

      // valid aligned with the two‐stage pipe
      pixel_vld_out <= vld_pipe[1];
    end
  end

endmodule

`endif // GAUSSIAN_BLUR_SV

module gaussian_blur (
  input  logic        clk,
  input  logic        rst_n,
  input  logic [7:0]  pixel_in,
  input  logic        pixel_vld,
  output logic [7:0]  pixel_out,
  output logic        pixel_vld_out
);

  // 1) Window generator: internal, no ports for taps
  logic [7:0] w00, w01, w02;
  logic [7:0] w10, w11, w12;
  logic [7:0] w20, w21, w22;

  window_gen #(.DATA_W(8), .IMG_W(32)) win0 (
    .clk       (clk),
    .pixel_in  (pixel_in),
    .pixel_vld (pixel_vld),
    .w00       (w00), .w01(w01), .w02(w02),
    .w10       (w10), .w11(w11), .w12(w12),
    .w20       (w20), .w21(w21), .w22(w22)
  );

  // 2) Convolution & normalization (combinational)
  logic [15:0] mac_sum;
  always_comb begin
    mac_sum = w00 + (w01<<1) + w02
            + (w10<<1) + (w11<<2) + (w12<<1)
            + w20 + (w21<<1) + w22;
  end

  // 3) Register the final pixel & valid flag
  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      pixel_out     <= 0;
      pixel_vld_out <= 0;
    end else begin
      pixel_out     <= mac_sum >> 4;  // divide by 16
      pixel_vld_out <= pixel_vld;     // or more complex ‘valid’ logic
    end
  end

endmodule

`timescale 1ns/1ps

module tb_blur;
  logic       clk;
  logic       rst_n;
  logic [7:0] pixel_in;
  logic       pixel_vld;
  logic [7:0] pixel_out;
  logic       pixel_vld_out;

    gaussian_blur Blur (
        .clk(clk),
        .rst_n(rst_n),
        .pixel_in(blur_in),
        .pixel_vld(vld_in),
        .pixel_out(blur_out),
        .pixel_vld_out(vld_out)
    );

    



    // Sample to drive clock
    localparam CLK_PERIOD = 10;

endmodule
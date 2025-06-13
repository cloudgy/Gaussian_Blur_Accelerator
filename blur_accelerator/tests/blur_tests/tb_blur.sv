`timescale 1ns/1ps

module tb_blur;
  // Parameters
  localparam CLK_PERIOD = 10;
  localparam IMG_W     = 32;
  localparam IMG_H     = 24;
  localparam NUM_PIXELS = IMG_W * IMG_H;

  // Signals
  logic        clk;
  logic        rst_n;
  logic [7:0]  pixel_in;
  logic        pixel_vld;
  logic [7:0]  pixel_out;
  logic        pixel_vld_out;

  // Input and output memories
  logic [7:0] img_mem  [0:NUM_PIXELS-1];
  logic [7:0] out_mem  [0:NUM_PIXELS-1];

  integer i;
  integer o_idx;

  // DUT instantiation
  gaussian_blur dut (
    .clk          (clk),
    .rst_n        (rst_n),
    .pixel_in     (pixel_in),
    .pixel_vld    (pixel_vld),
    .pixel_out    (pixel_out),
    .pixel_vld_out(pixel_vld_out)
  );

  // Clock generation
  initial begin
    clk = 0;
    forever #(CLK_PERIOD/2) clk = ~clk;
  end

  // Reset, initialize memories, drive inputs, and write outputs
  initial begin
    // Load input image
    $readmemh("image.mem", img_mem);

    // Initialize
    rst_n   = 0;
    pixel_in  = 0;
    pixel_vld = 0;
    o_idx   = 0;

    // Hold reset
    # (CLK_PERIOD * 5);
    rst_n = 1;
    # (CLK_PERIOD * 2);

    // Drive input pixels
    for (i = 0; i < NUM_PIXELS; i = i + 1) begin
      pixel_in  = img_mem[i];
      pixel_vld = 1;
      @(posedge clk);
    end

    // Stop driving
    pixel_vld = 0;
    pixel_in  = '0;

    // Wait for pipeline latency
    repeat (5) @(posedge clk);

    // Write output pixels to file
    $writememh("out_image.mem", out_mem);

    $finish;
  end

  // Capture valid outputs into memory
  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      o_idx <= 0;
    end else if (pixel_vld_out) begin
      out_mem[o_idx] <= pixel_out;
      o_idx          <= o_idx + 1;
    end
  end

  // Optional monitor
  initial begin
    $display("Time(ns) \t vld_in -> in  \t| vld_out -> out");
    $monitor("%0t \t %b -> %h  | %b -> %h", 
             $time, pixel_vld, pixel_in, pixel_vld_out, pixel_out);
  end

endmodule

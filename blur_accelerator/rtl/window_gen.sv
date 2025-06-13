//------------------------------------------------------------------------------
// Module: window_gen
// Description: Generates a 3×3 sliding window of pixels for convolution.
//              Uses two line buffers and three 3-deep shift registers.
//------------------------------------------------------------------------------
module window_gen #(
    parameter int DATA_W = 8,
    parameter int IMG_W  = 32
)(
    input  logic                 clk,
    input  logic                 rst_n,       // active-high synchronous reset
    input  logic                 pixel_vld,   // high when pixel_in is valid
    input  logic [DATA_W-1:0]    pixel_in,    // new pixel stream (raster order)

    output logic [DATA_W-1:0]    w00, w01, w02,  // top row taps
    output logic [DATA_W-1:0]    w10, w11, w12,  // mid row taps
    output logic [DATA_W-1:0]    w20, w21, w22   // bot row taps
);

    //------------------------------------------------------------------------------
    // Line buffers: one row delays
    //------------------------------------------------------------------------------
    logic [DATA_W-1:0] linebuf1 [0:IMG_W-1]; // holds previous row (the output pixel is on this row)
    logic [DATA_W-1:0] linebuf2 [0:IMG_W-1]; // holds row before last

    // Column pointer (tracks current column, 0 to IMG_W-1)
    logic [$clog2(IMG_W)-1:0] col;

    //------------------------------------------------------------------------------
    // Shift registers for each of the three rows
    //------------------------------------------------------------------------------
    logic [DATA_W-1:0] shift2 [0:2]; // current row
    logic [DATA_W-1:0] shift1 [0:2]; // one row ago
    logic [DATA_W-1:0] shift0 [0:2]; // two rows ago

    //------------------------------------------------------------------------------
    // Sequential logic: update buffers and shift-regs
    //------------------------------------------------------------------------------
    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            col <= '0;
            // initialize shift registers
            for (int i = 0; i < 3; i++) begin
                shift2[i] <= '0;
                shift1[i] <= '0;
                shift0[i] <= '0;
            end
        end else if (pixel_vld) begin
            // Shift in new pixel for current row
            shift2[2] <= shift2[1];
            shift2[1] <= shift2[0];
            shift2[0] <= pixel_in;

            // Shift from linebuf1 (one row delay)
            shift1[2] <= shift1[1];
            shift1[1] <= shift1[0];
            shift1[0] <= linebuf1[col];

            // Shift from linebuf2 (two row delay)
            shift0[2] <= shift0[1];
            shift0[1] <= shift0[0];
            shift0[0] <= linebuf2[col];

            // Update line buffers
            linebuf2[col] <= linebuf1[col];
            linebuf1[col] <= pixel_in;

            // Advance column pointer (suppress width-expansion warning)
            /* verilator lint_off WIDTHEXPAND */
            col <= (col == IMG_W-1) ? '0 : col + 1;
            /* verilator lint_on WIDTHEXPAND */
        end
    end

    //------------------------------------------------------------------------------
    // Map shift registers into 3×3 window taps
    //------------------------------------------------------------------------------
    assign { w00, w01, w02 } = { shift0[2], shift0[1], shift0[0] };
    assign { w10, w11, w12 } = { shift1[2], shift1[1], shift1[0] };
    assign { w20, w21, w22 } = { shift2[2], shift2[1], shift2[0] };

endmodule

# Gaussian Blur Accelerator

## Course Information

- **Course Name**: CPE 470: Open Source ASIC Design
- **Professor**: Francisco “Cisco” Wilken
- **Designers**: Halan Tran, Guru Yalakanti

An ASIC and software solution for applying a 3×3 Gaussian blur to 8-bit grayscale images in raster scan order. The hardware core supports a pixel-valid TB handshake or an SPI interface, while accompanying Python scripts automate image preprocessing, memory-file conversion, and reference blurring image generation.

---

## Table of Contents

1. [Project Overview](#project-overview)
2. [Modules & Scripts](#modules--scripts)
3. [Architecture](#architecture)
4. [Memory & I/O](#memory--io)
5. [SPI Integration](#spi-integration)
6. [Software Pipeline](#software-pipeline)
7. [Verification & Tests](#verification--tests)
8. [Getting Started](#getting-started)
9. [Future Work](#future-work)

---

## Project Overview

Modern computer-vision systems often require real-time smoothing and denoising. To meet these requirements, this ASIC design project delivers the following:

- **ASIC core**: Pipelined 3×3 Gaussian blur at 1 pixel/clock.
- **Software Testing Tool System**: Python scripts to convert images to .mem memory format, run a custom built "ground-truth" blur algorithm, and visualize results to compare the results side by side.
- **Flexible I/O**: Pixel‑valid handshake from TB or SPI wrapper.
- **3×3 Gaussian kernel**
  ```text
    1 2 1
    2 4 2
    1 2 1
  ```
  Follows the standard Gaussian Kernel calculation

---
## Modules & Scripts

### RTL Modules

- **gaussian\_blur.sv**: top-level blur core.
- **window\_gen.sv**: sliding-window generator.
- **spi\_wrapper.sv**: SPI‑slave wrapper.
- **tb\_blur.sv**: SystemVerilog testbench.

### Software Scripts

- **preprocesser.py**: color → grayscale conversion → VGA resize → `.mem` 
- **blur.py**: Python golden-model Gaussian blur with dynamic normalization that outputs a "blurred `.mem`
- **mem\_to\_image.py**: convert `.mem` hex stream back to a PNG

---

## Architecture

```text
  input stream   ┌─────────────┐    tap values ┌───────────┐    mac_sum    ┌──────────┐
  (pixel_in,     │ window_gen  │─────────────>│ MAC &     │────────────>│ Shift &  │
   pixel_vld)    │ (linebuf +   │              │ shifter   │             │ Normalize│
                 │  shift regs) │              └───────────┘             └──────────┘
                   │                                           pipeline   │ pixel_out
                   └──────────────────────────────────────────────────────> pixel_vld_out

                   (i spent too much time on this goofy diagram)
```

1. **window\_gen.sv**: two line buffers + three-element shift registers produce 3×3 tap set.
2. **gaussian\_blur.sv**: combinational MAC tree, dynamic normalization on edges, two-stage `pixel_vld` pipeline.
3. **spi\_wrapper.sv**: converts SPI bytes to pixel stream and back.

---

## Memory & I/O

- **Line Buffers**: `linebuf1`, `linebuf2` depth `IMG_W`.
- **Shift Registers**: track 3 columns per row.
- **Ports**:
  ```verilog
  input  logic        clk, rst_n;
  input  logic [7:0]  pixel_in;
  input  logic        pixel_vld;
  output logic [7:0]  pixel_out;
  output logic        pixel_vld_out;
  ```
- **.mem format**: one hex byte per line for each pixel in raster order.

---

## SPI Integration

Wrap the core for off-chip interfacing:

1. SPI Slave captures 8‑bit words on MOSI → asserts `pixel_vld`.
2. Core processes and outputs via `pixel_out` + `pixel_vld_out`.
3. SPI Master reads back on MISO.

Recommend **Mode 0** (CPOL=0, CPHA=0), MSB first.

---

## Software Pipeline

1. **Preprocess** a color image:
   ```bash
   python preprocesser.py input.jpg         # outputs image.mem + grayscale VGA JPEG
   ```
2. **Blur**:
   ```bash
   python blur.py image.mem 32 24 blurred.mem --png_out blurred.png
   ```
3. **Visualize output**:
   ```bash
   python mem_to_image.py blurred.mem 32 24 result.png
   ```

This pipeline works to aid RTL verification by comparing the `blurred.png` to hardware output.

---

## Verification & Tests

Test several types of images to verify that the behavior was not problematic at the edge cases:

- **Directed**: zero image, single bright pixel, edge cases.
- **Coverage**: row/column boundaries, masking behavior.
 
Verilator clean, no width warnings.

---

## Getting Started

```bash

# Run software pipeline
python preprocesser.py <input image>
python blur.py image.mem 32 24 blurred.mem --png_out blurred.png
python mem_to_image.py blurred.mem 32 24 result.png

# RTL simulation
make tests
```

---


## Future Work

I really wish that we were able to buffer images using a RAM macro like we had originally planned. I continuously encountered some error either with the macro initialization, or with the buffering process. I eventually gave up to focus on getting the core funtionality working.

I would have liked to exploit the separability of the Gaussian kernel - we could have reduced the average number of multiplication operations per pixel from 9 to only 6, ultimately increasing out performance by 30%.

Our blurred image STILL does not match the "ground-truth" image perfectly. There is some banding in the first two rows that I suspect has to do with the zero-buffering that I implemented in the RTL. We "solve" this problem by just cropping the blurred image in a little bit, but this is a very crude solution. I'd like to spend more time and identify what actually went wrong.

Lastly, it would be really cool to develop a new python toolchain to instead of finding the luminosity, split the image into three separate images based on the R, G, and B values. Once we have these three images, we can produce three separate blurred for each channel and combine them to produce blurred color images.

Even though we were not able to do everything we had initialy hoped to in regards to meeting the assignment spec and our own ambitions, I had a lot of fun with this project and am proud of what we learned along the way. This class, and this project, were really fun and I learned a lot about not only ASIC design but also project design and planning.



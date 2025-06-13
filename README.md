# Gaussian Blur Accelerator

## Course Information

- **Course Name**: CPE 470: Open Source ASIC Design  
- **Professor**: Francisco Wilken
- **Designers**: Halan Tran, Guru Yalakanti

An ASIC design that applies a 3×3 Gaussian blur to an 8-bit grayscale image streamed in raster scan order (image stream processing is still a W.I.P.) with SPI wrapper for off-chip interfacing.

---

## Table of Contents

1. [Project Overview](#project-overview)  
2. [Features](#features)  
3. [Architecture](#architecture)  
4. [Modules](#modules)  
5. [Memory & I/O](#memory--io)  
6. [SPI Integration](#spi-integration)  
7. [Verification & Tests](#verification--tests)  
8. [Getting Started](#getting-started)  
9. [File Layout](#file-layout)  
10. [Future Work](#future-work)  

---

## Project Overview

Modern computer vision applications often need real-time smoothing and denoising. To meet these real-time requirements, this ASIC design implements a 3x3 Gaussian blur system with the following characteristics:

- **Streaming**: We focused on processing one pixel per clock, with a `pixel_valid` handshake.  
- **Zero-padded edges**: By acknowledging that the edges will be zero-padded, we can remove the blurred edges (which will be darker than they are supposed to be) and consistently produce a "pretty good" blurred image while also avoiding integer division by managing the varying kernel weights at the edges.  
- **Lightweight**: The design relies mostly on two very simple line buffers and shift registers.  
- **Flexible interface**: can be driven directly from a testbench or wrapped with SPI.

---

## Features

- **3×3 Gaussian kernel**:  

<div style="display: flex; justify-content: center; align-items: center; height: 100%; background-color: #f6f8fa; padding: 10px; border-radius: 5px; text-align: center;">
<pre style="margin: 0;">
1 2 1
2 4 2
1 2 1
</pre>
</div>

normalized by 16 (full-kernel) or by 4 on the first row (zero-pad case)  
- **Streaming datapath**: single MAC tree with combinational accumulation and shared shifters for scaling  
- **Two-stage valid pipeline**: aligns pixel-valid through window generation and MAC/shifter  
- **Parameterizable frame size**: default 32×24, but generic via `IMG_W`/`IMG_H` parameters  
- **SPI-slave wrapper**: optional top-level to convert serial input/output into pixel stream  

---  

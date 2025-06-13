#!/usr/bin/env python3
import argparse
import numpy as np
from PIL import Image
import sys

def gaussian_blur_with_padding(img: np.ndarray) -> np.ndarray:
    """
    Apply a 3x3 Gaussian blur with zero padding on all edges
    and dynamic normalization by the actual sum of weights.
    """
    H, W = img.shape
    # 3x3 kernel
    kernel = np.array([[1, 2, 1],
                       [2, 4, 2],
                       [1, 2, 1]], dtype=np.uint16)

    # Pad image and mask
    padded_img = np.pad(img, ((1,1), (1,1)), mode='constant', constant_values=0)
    # Mask of valid pixels (1 inside, 0 for padding)
    mask = np.pad(np.ones_like(img, dtype=np.uint16), ((1,1), (1,1)), 
                  mode='constant', constant_values=0)

    out = np.zeros_like(img, dtype=np.uint8)

    # Convolve every center and edge pixel
    for r in range(H):
        for c in range(W):
            region = padded_img[r:r+3, c:c+3].astype(np.uint16)
            weight_mask = mask[r:r+3, c:c+3]
            # Compute weighted sum
            s = int((region * kernel).sum())
            # Actual sum of weights that apply
            wsum = int((kernel * weight_mask).sum())
            # Normalize by actual weight sum
            out[r, c] = 0 if wsum == 0 else (s // wsum)

    return out

def mem_to_image_array(mem_file: str, width: int, height: int) -> np.ndarray:
    with open(mem_file, 'r') as f:
        tokens = [tok for tok in f.read().split() if not tok.startswith('//')]
    pixels = np.array([int(tok, 16) for tok in tokens], dtype=np.uint8)
    if pixels.size != width * height:
        print(f"Error: expected {width*height} pixels, got {pixels.size}", file=sys.stderr)
        sys.exit(1)
    return pixels.reshape((height, width))

def image_array_to_mem(img: np.ndarray, mem_file: str) -> None:
    H, W = img.shape
    with open(mem_file, 'w') as f:
        for val in img.flatten():
            f.write(f"{val:02X}\n")

def main():
    parser = argparse.ArgumentParser(description="Zero-padded 3x3 Gaussian blur with dynamic normalization.")
    parser.add_argument("mem_in", help="Input .mem file of hex pixel values")
    parser.add_argument("width", type=int, help="Image width")
    parser.add_argument("height", type=int, help="Image height")
    parser.add_argument("mem_out", help="Output .mem file for blurred pixels")
    parser.add_argument("--png_out", help="Optional: save blurred image as PNG")
    args = parser.parse_args()

    img = mem_to_image_array(args.mem_in, args.width, args.height)
    blurred = gaussian_blur_with_padding(img)
    image_array_to_mem(blurred, args.mem_out)
    print(f"Blurred `.mem` written to {args.mem_out}")

    if args.png_out:
        Image.fromarray(blurred, mode='L').save(args.png_out)
        print(f"Blurred PNG saved to {args.png_out}")

if __name__ == "__main__":
    main()

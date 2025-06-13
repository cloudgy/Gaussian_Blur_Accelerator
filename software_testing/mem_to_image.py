import argparse
import numpy as np
from PIL import Image

def mem_to_image(mem_file, width, height, output_file):
    with open(mem_file, 'r') as f:
        tokens = f.read().split()
    pixels = np.array([int(tok, 16) for tok in tokens], dtype=np.uint8)
    
    # Validate size
    expected = width * height
    if pixels.size != expected:
        raise ValueError(f"Expected {expected} pixels for {width}x{height}, but found {pixels.size}")
    
    # Reshape into 2D array (height, width)
    img_array = pixels.reshape((height, width))
    
    # Create grayscale image
    img = Image.fromarray(img_array, mode='L')
    img.save(output_file)
    print(f"Saved image to {output_file}")

def main():
    parser = argparse.ArgumentParser(
        description="Convert a .mem file of hex pixel luminescence values into a grayscale image."
    )
    parser.add_argument("mem_file", help="Path to input .mem file (hex values)")
    parser.add_argument("width", type=int, help="Image width")
    parser.add_argument("height", type=int, help="Image height")
    parser.add_argument("output", help="Output image file (e.g., output.png)")
    args = parser.parse_args()

    mem_to_image(args.mem_file, args.width, args.height, args.output)

if __name__ == "__main__":
    main()

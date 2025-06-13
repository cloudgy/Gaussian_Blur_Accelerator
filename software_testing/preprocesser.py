import sys
from PIL import Image
import numpy as np

def color_to_grayscale(image):
    """
    Convert a color image to grayscale.
    
    Args:
        PIL.Image.Image image: The input color image.

    Returns:
        PIL.Image.Image: The grayscale image.
    """
    
    # return image.convert("L")
    # ^ this is how I would do it if i wanted to actually be faster
    
    image = image.convert("RGB")
    width, height = image.size
    grayscale_image = Image.new("L", (width, height))
    
    color_pixels = image.load()
    if color_pixels is None:
        raise ValueError("The input image is not properly loaded or initialized.") # linter needs this
    
    grayscale_pixels = grayscale_image.load()
    if grayscale_pixels is None:
        raise ValueError("The grayscale image is not properly initialized.") # linter needs this
    
    for column in range(width):
        for row in range(height):
            r, g, b = color_pixels[column, row]
            grayscale_value = int(0.299 * r + 0.587 * g + 0.114 * b) # Find the luminance of the pixel
            grayscale_pixels[column, row] = grayscale_value

    return grayscale_image

def size_to_vga(image):
    """
    Convert the image to a VGA size (32x24).
    
    Args:
        PIL.Image.Image: The input image.

    Returns:
        PIL.Image.Image: The resized image.
    """

    if image.size[0] == 32 and image.size[1] == 24:
        return image
    elif image.size[0] > 32 or image.size[1] > 24:
        image = image.resize((32, 24), Image.Resampling.LANCZOS)
    else:
        image = image.resize((32, 24), Image.Resampling.BICUBIC)

    return image

#main
if __name__ == "__main__":
    
    if (len(sys.argv) < 2):
        print("Usage: python preprocesser.py <image_path> <optional: output_path>")
        sys.exit(1)

    image_path = sys.argv[1]
    output_path = sys.argv[2] if len(sys.argv) > 2 else "output.jpg"
    
    try:
        image = Image.open(image_path)
        
    except FileNotFoundError:
        print(f"Error: The file {image_path} was not found.")
        sys.exit(1)

    vga_image = size_to_vga(image)
    grayscale__vga_image = color_to_grayscale(vga_image)
    grayscale__vga_image.save(output_path)
    

    print(f"Grayscale image of size {grayscale__vga_image.size} saved as {output_path}")
    
    pixels = np.asarray(grayscale__vga_image).flatten()
    
    mem_filename = "image.mem" 
    with open(mem_filename, "w") as f:
        for pixel in pixels:
            f.write(f"{pixel:02X}\n")

    print(f"Memory file written: {mem_filename}")
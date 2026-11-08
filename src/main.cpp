#include <iostream>
#include "Image.h"

int main() {

    // Create a 4 x 3 grayscale image
    Image image(4, 3);

    // Display image information
    image.displayInfo();

    // Set some pixel values
    image.setPixel(0, 0, 100);
    image.setPixel(1, 0, 150);
    image.setPixel(2, 1, 200);

    // Retrieve pixel values
    std::cout << "\nPixel values:" << std::endl;

    std::cout << "Pixel (0, 0): "
              << static_cast<int>(image.getPixel(0, 0))
              << std::endl;

    std::cout << "Pixel (1, 0): "
              << static_cast<int>(image.getPixel(1, 0))
              << std::endl;

    std::cout << "Pixel (2, 1): "
              << static_cast<int>(image.getPixel(2, 1))
              << std::endl;

    return 0;
}
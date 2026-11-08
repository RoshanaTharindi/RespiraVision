#include "Image.h"

#include <iostream>
#include <stdexcept>
#include <limits>

Image::Image(std::size_t imageWidth, std::size_t imageHeight) : width(imageWidth), height(imageHeight)
{
    if(width == 0 || height == 0)
    {
        throw std::invalid_argument("Image dimensions must be greater than zero");
    }

    if(width>std::numeric_limits<std::size_t>::max()/height)
    {
        throw std::length_error("Image dimensions are too large.");
    }

    pixels.resize(width*height, 0);

    std::cout << "Image created successfully." << std::endl;
}

Image::~Image()
{
    std::cout << "Image destroyed" << std::endl;
}

std::size_t Image::getWidth() const
{
    return width;
}

std:: size_t Image::getHeight() const
{
    return height;
}

void Image::setPixel(
    std::size_t x,
    std::size_t y,
    std::uint8_t value
) {
    if (x >= width || y >= height) {
        throw std::out_of_range("Pixel coordinates are out of range.");
    }

    pixels[y * width + x] = value;
}

std::uint8_t Image::getPixel(
    std::size_t x,
    std::size_t y
) const {
    if (x >= width || y >= height) {
        throw std::out_of_range("Pixel coordinates are out of range.");
    }

    return pixels[y * width + x];
}

void Image::displayInfo() const {
    std::cout << "Image dimensions: "
              << width << " x " << height << std::endl;

    std::cout << "Total pixels: "
              << pixels.size() << std::endl;
}


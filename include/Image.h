#ifndef IMAGE_H
#define IMAGE_H

#include <vector>
#include <cstddef>
#include <cstdint>

class Image {
private:
    std::size_t width;
    std::size_t height;

    // Each pixel stores a grayscale intensity from 0 to 255
    std::vector<std::uint8_t> pixels;

public:
    // Constructor
    Image(std::size_t width, std::size_t height);

    // Destructor
    ~Image();

    // Return image dimensions
    std::size_t getWidth() const;
    std::size_t getHeight() const;

    // Set and retrieve pixel values
    void setPixel(std::size_t x, std::size_t y, std::uint8_t value);
    std::uint8_t getPixel(std::size_t x, std::size_t y) const;

    // Display image information
    void displayInfo() const;
};

#endif
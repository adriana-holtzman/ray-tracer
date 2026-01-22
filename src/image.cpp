#include "image.h"
#include <algorithm>

// TODO: allocate pixel buffer
Image::Image(int width, int height)
    : m_width(width), m_height(height), m_pixels(width * height) {}

int Image::width() const { return m_width; }
int Image::height() const { return m_height; }

// TODO: clamp color, flip y-axis if desired
void Image::setPixel(int x, int y, const Vec3& color) {
    if (x < 0 || x >= m_width || y < 0 || y >= m_height) return;
    m_pixels[y * m_width + x] = color;
}

// TODO: use stb_image_write to write PNG
void Image::writePNG(const char* filename) const {
    // stub: do nothing for now
}

#pragma once

#include <vector>
#include "vec3.h"

class Image {
public:
    Image(int width, int height);

    int width() const;
    int height() const;

    void setPixel(int x, int y, const Vec3& color);
    void writePNG(const char* filename) const;

private:
    int m_width;
    int m_height;
    std::vector<Vec3> m_pixels;
};

#include "vec3.h"
#include <cmath>

// TODO: initialize to (0,0,0)
Vec3::Vec3() : e{0.0, 0.0, 0.0} {}

Vec3::Vec3(double x, double y, double z) : e{x, y, z} {}

double Vec3::x() const { return e[0]; }
double Vec3::y() const { return e[1]; }
double Vec3::z() const { return e[2]; }

// TODO: implement vector arithmetic
Vec3 Vec3::operator+(const Vec3& other) const {
    return Vec3();
}

Vec3 Vec3::operator-(const Vec3& other) const {
    return Vec3();
}

Vec3 Vec3::operator*(double s) const {
    return Vec3();
}

Vec3 Vec3::operator/(double s) const {
    return Vec3();
}

// TODO: implement length and normalization
double Vec3::length() const {
    return 0.0;
}

Vec3 Vec3::normalized() const {
    return Vec3();
}

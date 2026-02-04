#include "vec3.h"
#include <cmath>

// Initialize to 0,0,0 if no values given
Vec3::Vec3() : e{0.0, 0.0, 0.0} {}

// Initialize to x,y,z if values given
Vec3::Vec3(double x, double y, double z) : e{x, y, z} {}

// Return component
double Vec3::x() const { return e[0]; }
double Vec3::y() const { return e[1]; }
double Vec3::z() const { return e[2]; }

// Addition
Vec3 Vec3::operator+(const Vec3& other) const {
    return Vec3(e[0] + other.e[0],
                e[1] + other.e[1],
                e[2] + other.e[2]);
}

// Subtraction
Vec3 Vec3::operator-(const Vec3& other) const {
    return Vec3(e[0] - other.e[0], 
                e[1] - other.e[1], 
                e[2] - other.e[2]);
}

// Scalar multiplication
Vec3 Vec3::operator*(double s) const {
    return Vec3(e[0] * s, 
                e[1] * s, 
                e[2] * s);
}

// Scalar division
Vec3 Vec3::operator/(double s) const {
    return Vec3(e[0] / s, 
                e[1] / s, 
                e[2] / s);
}

// Length 
double Vec3::length() const {
    return sqrt(e[0]*e[0] + e[1]*e[1] + e[2]*e[2]);
}

// Normalization
Vec3 Vec3::normalized() const {
    return *this/length();
}

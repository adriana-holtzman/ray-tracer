#include "ray.h"

// Initialize
Ray::Ray()
    : orig(Vec3(0.0, 0.0, 0.0)), dir(Vec3(0.0, 0.0, 0.0)) {}

Ray::Ray(const Vec3& origin, const Vec3& direction)
    : orig(origin), dir(direction) {}

// Return origin or direction methods
const Vec3& Ray::origin() const {
    return orig;
}

const Vec3& Ray::direction() const {
    return dir;
}

// at method, origin + time * direction
Vec3 Ray::at(double t) const {
    return orig + dir * t;
}

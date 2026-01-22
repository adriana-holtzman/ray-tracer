#include "ray.h"

// TODO: initialize origin and direction to zero vectors
Ray::Ray()
    : orig(Vec3(0.0, 0.0, 0.0)), dir(Vec3(0.0, 0.0, 0.0)) {}

Ray::Ray(const Vec3& origin, const Vec3& direction)
    : orig(origin), dir(direction) {}
    
const Vec3& Ray::origin() const {
    return orig;
}

const Vec3& Ray::direction() const {
    return dir;
}

Vec3 Ray::at(double t) const {
    // TODO: origin + t * direction
    return orig;
}

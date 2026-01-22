#include "plane.h"

// TODO: normalize normal
Plane::Plane(const Vec3& point, const Vec3& normal, const Material* material)
    : point(point), normal(normal), material(material) {}

// TODO: ray-plane intersection
bool Plane::hit(
    const Ray& r,
    double t_min,
    double t_max,
    HitRecord& rec
) const {
    return false;
}

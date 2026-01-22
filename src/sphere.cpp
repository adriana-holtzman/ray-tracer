#include "sphere.h"

// TODO: store parameters
Sphere::Sphere(const Vec3& center, double radius, const Material* material)
    : center(center), radius(radius), material(material) {}

// TODO: ray-sphere intersection
bool Sphere::hit(
    const Ray& r,
    double t_min,
    double t_max,
    HitRecord& rec
) const {
    return false;
}

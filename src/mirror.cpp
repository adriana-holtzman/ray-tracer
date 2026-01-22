#include "mirror.h"

// TODO: store albedo
Mirror::Mirror(const Vec3& albedo)
    : albedo(albedo) {}

// TODO: perfect reflection
bool Mirror::scatter(
    const Ray& in,
    const HitRecord& rec,
    Vec3& attenuation,
    Ray& scattered
) const {
    return false;
}

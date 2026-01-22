#include "lambertian.h"

// TODO: store albedo
Lambertian::Lambertian(const Vec3& albedo)
    : albedo(albedo) {}

// TODO: cosine-weighted scattering
bool Lambertian::scatter(
    const Ray& in,
    const HitRecord& rec,
    Vec3& attenuation,
    Ray& scattered
) const {
    return false;
}

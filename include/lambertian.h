#pragma once

#include "material.h"

class Lambertian : public Material {
public:
    Lambertian(const Vec3& albedo);

    bool scatter(
        const Ray& in,
        const HitRecord& rec,
        Vec3& attenuation,
        Ray& scattered
    ) const override;

private:
    Vec3 albedo;
};

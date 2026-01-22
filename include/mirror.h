#pragma once

#include "material.h"

class Mirror : public Material {
public:
    Mirror(const Vec3& albedo);

    bool scatter(
        const Ray& in,
        const HitRecord& rec,
        Vec3& attenuation,
        Ray& scattered
    ) const override;

private:
    Vec3 albedo;
};

#pragma once

#include "ray.h"
#include "hittable.h"

class Material {
public:
    virtual ~Material() = default;

    virtual bool scatter(
        const Ray& in,
        const HitRecord& rec,
        Vec3& attenuation,
        Ray& scattered
    ) const = 0;
};

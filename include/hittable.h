#pragma once

#include "ray.h"

class Material;

struct HitRecord {
    Vec3 point;
    Vec3 normal;
    double t;
    const Material* material;
};

class Hittable {
public:
    virtual ~Hittable() = default;

    virtual bool hit(
        const Ray& r,
        double t_min,
        double t_max,
        HitRecord& rec
    ) const = 0;
};

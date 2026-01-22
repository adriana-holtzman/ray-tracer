#pragma once

#include "hittable.h"

class Sphere : public Hittable {
public:
    Sphere(const Vec3& center, double radius, const Material* material);

    bool hit(
        const Ray& r,
        double t_min,
        double t_max,
        HitRecord& rec
    ) const override;

private:
    Vec3 center;
    double radius;
    const Material* material;
};

#pragma once

#include "hittable.h"

class Plane : public Hittable {
public:
    Plane(const Vec3& point, const Vec3& normal, const Material* material);

    bool hit(
        const Ray& r,
        double t_min,
        double t_max,
        HitRecord& rec
    ) const override;

private:
    Vec3 point;
    Vec3 normal;
    const Material* material;
};

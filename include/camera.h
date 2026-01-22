#pragma once

#include "ray.h"

class Camera {
public:
    Camera(double vfov, double aspect);

    Ray generateRay(double u, double v) const;

private:
    Vec3 origin;
    Vec3 lower_left_corner;
    Vec3 horizontal;
    Vec3 vertical;
};

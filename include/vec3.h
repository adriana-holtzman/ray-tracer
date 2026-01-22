#pragma once

class Vec3 {
public:
    Vec3();
    Vec3(double x, double y, double z);

    double x() const;
    double y() const;
    double z() const;

    Vec3 operator+(const Vec3& other) const;
    Vec3 operator-(const Vec3& other) const;
    Vec3 operator*(double s) const;
    Vec3 operator/(double s) const;

    double length() const;
    Vec3 normalized() const;

private:
    double e[3];
};

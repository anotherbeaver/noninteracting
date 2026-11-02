#include "Vector.h"
#include <cmath>

Vector::Vector(float x, float y, float z)
    : x(x), y(y), z(z)
{
}

float Vector::getNorm()
{
    return std::sqrt(x * x + y * y + z * z);
}

bool Vector::isUnit()
{
    if (std::abs(getNorm() - 1.0f) < 1e-6f)
        return true;
    return false;
}
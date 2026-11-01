#include "Vector.h"
#include <cmath>

Vector::Vector(float x, float y, float z)
{
    this->x = x;
    this->y = y;
    this->z = z;
}

float Vector::getNorm()
{
    return std::sqrt(x * x + y * y + z * z);
}
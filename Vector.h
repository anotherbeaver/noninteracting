#ifndef VECTOR_H
#define VECTOR_H

class Vector
{
public:
    Vector(float x, float y, float z);

    float getNorm();
    bool isUnit();
    float getX() { return x; }
    float getY() { return y; }
    float getZ() { return z; }

private:
    float x, y, z; // always have three components, should ignore last ones if 1 or 2d
};

#endif
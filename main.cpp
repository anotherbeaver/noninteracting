#include <iostream>
#include "Lattice.h"
using namespace std;

int main()
{
    cout << "Hello, World!" << endl;

    Vector vector(1, 1, 1);
    Vector vector1(1, 0, 0);

    float length = vector.getNorm();

    cout << "length: " << length << endl;

    bool isUnit = vector1.isUnit();
    cout << "is unit: " << isUnit << endl;

    Lattice lattice(2, {Vector(1, 0, 0), Vector(0, 1, 0), Vector(0, 0, 1)});

    cout << "Lattice dimensions: " << lattice.getDimensions() << endl;
}

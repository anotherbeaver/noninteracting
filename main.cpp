#include <iostream>
#include "Lattice.h"
using namespace std;

int main()
{
    cout << "Hello, World!" << endl;

    Vector vector(1, 1, 1);

    float length = vector.getNorm();

    cout << "length: " << length << endl;
}

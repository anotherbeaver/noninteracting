#ifndef LATTICE_H
#define LATTICE_H
#include "Vector.h"
#include <array>

class Lattice
{
public:
private:
    int dimensions;                          // 1, 2, or 3
    std::array<Vector, 3> lattice_vectors;   // lattice vectors (list of Vectors) // canonical a_1, a_2, and a_3 order
    std::array<bool, 3> periodic_directions; // canonical a_1, a_2, or a_3 order, used to determine translational symmetry across a_1, a_2, or a_3 directions
    // orbitals // arbitrary size list of orbitals, same order as positions
    // positions // basis coordinate in lattice vector basis of orbitals, same order as orbitals
};

#endif // LATTICE_H
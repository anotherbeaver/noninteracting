#ifndef LATTICE_H
#define LATTICE_H
#include "Vector.h"
#include "Orbital.h"
#include <array>
#include <vector>

class Lattice
{
public:
    Lattice(int dimensions, std::array<Vector, 3> lattice_vectors, std::array<bool, 3> periodic_directions, std::vector<Orbital> orbitals, std::vector<Vector> positions)
        : dimensions(dimensions), lattice_vectors(lattice_vectors), periodic_directions(periodic_directions), orbitals(orbitals), positions(positions)
    {
        if (orbitals.size() != positions.size())
            throw "Size of orbitals and positions list must be the same";

        if (dimensions < 1 || dimensions > 3)
            throw "dimensions must be in [1, 3]";
    }

    Lattice(int dimensions, std::array<Vector, 3> lattice_vectors)
        : dimensions(dimensions), lattice_vectors(lattice_vectors), periodic_directions{true, true, true}, orbitals{}, positions{}
    {
        if (dimensions < 1 || dimensions > 3)
            throw "dimensions must be in [1, 3]";
    } // assumes periodic in all directions, init with empty orbitals & positions

    int getDimensions() { return dimensions; };
    std::array<Vector, 3> getLatticeVectors() { return lattice_vectors; };
    std::array<bool, 3> getPeriodicDirections() { return periodic_directions; };
    std::vector<Orbital> getOrbitals() { return orbitals; };
    std::vector<Vector> getPositions() { return positions; };

private:
    int dimensions;                          // 1, 2, or 3
    std::array<Vector, 3> lattice_vectors;   // lattice vectors (list of Vectors) // canonical a_1, a_2, and a_3 order
    std::array<bool, 3> periodic_directions; // canonical a_1, a_2, or a_3 order, used to determine translational symmetry across a_1, a_2, or a_3 directions
    std::vector<Orbital> orbitals;           // arbitrary size list of orbitals, same order as positions
    std::vector<Vector> positions;           // basis coordinate in lattice vector basis of orbitals, same order as orbitals
};

#endif // LATTICE_H
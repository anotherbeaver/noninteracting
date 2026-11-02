#ifndef ORBITAL_H
#define ORBITAL_H

#include "Vector.h"

class Orbital
{
public:
    enum class OrbitalType
    {
        s,
        p,
        d,
        f
    };

    Orbital(Vector position, OrbitalType orbital_type, int magnetic_quantum_number)
        : position(position), orbital_type(orbital_type), magnetic_quantum_number(magnetic_quantum_number) {}

    Vector getPosition() { return position; }
    OrbitalType getOrbitalType() { return orbital_type; }
    int getMagneticQuantumNumber() { return magnetic_quantum_number; }
    int getHoppingSign(Orbital orbital, Orbital other_orbital);

private:
    Vector position;             // position of orbital in lattice vector basis
    OrbitalType orbital_type;    // s, p, d, f, enum above, or angular momentum l
    int magnetic_quantum_number; // m, can only in [-l, l] where n is angular momentum
};

#endif
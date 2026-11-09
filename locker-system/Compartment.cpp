#include "Compartment.h"

Compartment::Compartment(int compartmentId, ParcelSize size) // constructor, called at initialisation
    : compartmentId(compartmentId),isOccupied(false), isLocked(true), size(size) {} // initial attributes

void Compartment::unlock() {
    isLocked = false;
}

void Compartment::lock()
{
    isLocked = true;
}

bool Compartment::isAvailable() const
{
    return isOccupied == false;
}

void Compartment::markOccupied()
{
    isOccupied = true;
}

void Compartment::markEmpty()
{
    isOccupied = false;
}

ParcelSize Parcel::getSize() const {
    return size;
}

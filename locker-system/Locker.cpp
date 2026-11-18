#include "Locker.h"
#include <string>
#include <vector>
#include "Compartment.h"
#include "ParcelSize.h"
#include <stdexcept>

using std::string;
using std::vector;

Locker::Locker(int lockerId, double fee, const string location, const vector<Compartment> compartments)
    : lockerId_(lockerId), fee_(fee), location_(location), compartments_(compartments) 
{
}

Compartment* Locker::findAvailableCompartment(ParcelSize size)
{
    for (Compartment& i : compartments_) {
        if (i.getSize() == size && i.isAvailable()) {
            return &i;
        }
    }
    return nullptr;
}

// gets the amount of occupants
double Locker::getOccupancyRate() const
{
    if (compartments_.empty()) return 0.0; // Prevent divide by zero

    int occupied = 0;

    for (const Compartment& i : compartments_)
    {
        if (i.isAvailable() == false)
        {
            occupied++;
        }
    }
    
    double occupiedD = static_cast<double>(occupied);
    double total = compartments_.size();
    double occupiedRate = occupiedD / total;
    return occupiedRate;
}

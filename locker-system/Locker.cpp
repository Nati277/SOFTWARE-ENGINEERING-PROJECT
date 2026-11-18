#include "Locker.h"
#include <string>
#include <vector>
#include "Compartment.h"
#include "ParcelSize.h"
#include <stdexcept>

using std::string;
using std::vector;

Locker::Locker(int lockerId, double fee, const string location, const vector<Compartment> compartments) // constructor, starts at initialisation
    : lockerId(lockerId), fee_(fee), location(location), compartments(compartments) {} // starting values


Compartment* Locker::findAvailableCompartment(ParcelSize size) // this will look for an available compartment (not empty)
{
    for (Compartment& i : compartments) {
        if (i.getSize() == size && i.isAvailable()) {    // i.getSize needed so it can be compared ith size, otherwise size is an unnecessary concept
            return &i;                                   // returns the available compartment
        }
    }
    return nullptr;       // no free compartment of right size, runs when loop to find fails because it would have already returned
}

// gets the amount of occupants

double Locker::getOccupancyRate() const
{

    int occupied = 0; // occupied is set as 0

    for (const Compartment& i : compartments)
    {
        if (i.isAvailable() == false)
        {
            occupied++;      // for each compartment, if one is unavailable it means it has occupants, so occupied increases by one
        }
    }

    double occupiedD = static_cast<double>(occupied); // turns occupied which is an int value into a double o we can calculate a rate
    double Locker::getOccupancyRate() const {
    if (compartments.empty()) return 0.0; // Prevent divide by zero
    
    int occupied = 0; }
    double occupiedRate = occupiedD / totaln; // takes the number of occupied and divides by number of total compartments, telling the occupied rate.
    return occupiedRate;



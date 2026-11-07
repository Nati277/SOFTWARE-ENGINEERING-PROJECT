#include <string>
#include <vector>
#include "Compartment.h"
#include "ParcelSize.h"


#ifndef LOCKER_SYSTEM_LOCKER_H
#define LOCKER_SYSTEM_LOCKER_H


class Locker {

public:
    Locker(int lockerId, const std::string& location, const std::vector<Compartment>& compartments);
    Compartment* findAvailableCompartment(ParcelSize size);
    double getOccupancyRate() const;


private:
    int lockerId;
    std::string location;
    std::vector<Compartment> compartments; //composition begins here, vector used so amount is dynamic.


};


#endif //LOCKER_SYSTEM_LOCKER_H
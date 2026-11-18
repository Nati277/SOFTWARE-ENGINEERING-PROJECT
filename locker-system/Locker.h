#include <string>
#include <vector>
#include "Compartment.h"
#include "ParcelSize.h"


#ifndef LOCKER_SYSTEM_LOCKER_H
#define LOCKER_SYSTEM_LOCKER_H


class Locker {

protected:
int id_;
double fee_;

public:
    Locker(int lockerId, double fee, const std::string location, const std::vector<Compartment> compartments);
    Compartment* findAvailableCompartment(Validation size); // pointer to allow for actual change of compartment (not on copy)
    double getOccupancyRate() const;


private:
    int lockerId;
    std::string location;
    std::vector<Compartment> compartments; // composition begins here, vector used so amount is dynamic.

};


#endif //LOCKER_SYSTEM_LOCKER_H

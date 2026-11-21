#include <string>
#include <vector>
#include "Compartment.h"
#include "ParcelSize.h"


#ifndef LOCKER_SYSTEM_LOCKER_H
#define LOCKER_SYSTEM_LOCKER_H


class Locker {

protected:
int lockerId_;
double fee_;
std::string location_;
std::vector<Compartment> compartments_;

public:
    Locker(int lockerId, double fee, const std::string location, const std::vector<Compartment> compartments);

    virtual ~Locker() = default;

    virtual double calculateFee() const = 0;


   Compartment* findAvailableCompartment(ParcelSize size); // pointer to allow for actual change of compartment
    double getOccupancyRate() const;


};


#endif //LOCKER_SYSTEM_LOCKER_H

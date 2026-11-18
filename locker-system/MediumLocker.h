#ifndef LOCKER_SYSTEM_MEDIUMLOCKER_H
#define LOCKER_SYSTEM_MEDIUMLOCKER_H

#include "Locker.h"
#include <string>
#include <vector>

class MediumLocker : public Locker
{
public:
    MediumLocker(int id, std::string location, std::vector<Compartment> compartments)
        : Locker(id, 3.50, location, compartments) {} // chose 3.50 pretty randomly tbh

    double calculateFee() const override {
        return fee_;
    }
};



#endif //LOCKER_SYSTEM_MEDIUMLOCKER_H
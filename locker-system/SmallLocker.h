#ifndef LOCKER_SYSTEM_SMALLLOCKER_H
#define LOCKER_SYSTEM_SMALLLOCKER_H

#include "Locker.h"
#include <string>
#include <vector>

class SmallLocker : public Locker {
public:
    // Pass the variables up to the base class, hardcode the fee to 1.50
    SmallLocker(int id, std::string location, std::vector<Compartment> compartments) 
        : Locker(id, 1.50, location, compartments) {}

    // Implement the pure virtual function from Locker!
    double calculateFee() const override {
        return 1.50; 
    }
};

#endif

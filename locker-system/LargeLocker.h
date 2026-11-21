#ifndef LOCKER_SYSTEM_LARGELOCKER_H
#define LOCKER_SYSTEM_LARGELOCKER_H

#include "Locker.h"
#include <string>
#include <vector>


class LargeLocker : public Locker {
public:
    LargeLocker(int id, std::string location, std::vector<Compartment> compartments)
        : Locker(id, 5.00, location, compartments) {}

    double calculateFee() const override {
        return fee_;
    }
};

#endif //LOCKER_SYSTEM_LARGELOCKER_H
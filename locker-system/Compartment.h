//
// Created by antia on 06/11/2026.
//

#ifndef LOCKER_SYSTEM_COMPARTMENT_H
#define LOCKER_SYSTEM_COMPARTMENT_H
#include "ParcelSize.h"

// waiting for design clarification on size, will fix when clarified. Thank you
// for now this will be a version without it


class Compartment {

public:
    explicit Compartment(int compartmentId); // explicit as only one attribute here for now (no size yet)

    void unlock();
    void lock();
    void markOccupied();
    void markEmpty();
    bool isAvailable() const;


private:

    int compartmentId;
    // ParcelSize size; (until clarification will be commented out)
    bool isOccupied;
    bool isLocked;

};


#endif //LOCKER_SYSTEM_COMPARTMENT_H
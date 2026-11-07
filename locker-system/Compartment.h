//
// Created by antia on 06/11/2026.
//

#ifndef LOCKER_SYSTEM_COMPARTMENT_H
#define LOCKER_SYSTEM_COMPARTMENT_H
#include "ParcelSize.h"

// got clarification on the size thing, will do it like this for now.

class Compartment {

public:
    Compartment(int compartmentId, ParcelSize size); // I'll do it like this for now and try to talk about this in our meeting

    void unlock();
    void lock();
    void markOccupied();
    void markEmpty();
    bool isAvailable() const;
    ParcelSize getSize() const;

private:

    int compartmentId;
    ParcelSize size;
    bool isOccupied;
    bool isLocked;

};


#endif //LOCKER_SYSTEM_COMPARTMENT_H
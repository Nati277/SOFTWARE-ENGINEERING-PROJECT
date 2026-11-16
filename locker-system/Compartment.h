
#ifndef LOCKER_SYSTEM_COMPARTMENT_H
#define LOCKER_SYSTEM_COMPARTMENT_H
#include "ParcelSize.h"



class Compartment {

public:
    Compartment(int compartmentId, Validation size); // I'll do it like this for now and try to talk about this in our meeting

    void unlock();
    void lock();
    void markOccupied();
    void markEmpty();
    bool isAvailable() const;
    Validation getSize() const;

private:

    int compartmentId;
    Validation size;
    bool isOccupied;
    bool isLocked;

};


#endif //LOCKER_SYSTEM_COMPARTMENT_H
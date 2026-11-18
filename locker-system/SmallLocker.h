#ifndef LOCKER_SYSTEM_SMALLLOCKER_H
#define LOCKER_SYSTEM_SMALLLOCKER_H

#include "Locker.h"
#include <string>
#include <vector>

class SmallLocker : public Locker {
public:
    // Pass the location and compartments up to the base Locker class, 
    // and hardcode the fee as 1.50
    SmallLocker(int id, std::string location, std::vector<Compartment> compartments) 
        : Locker(id, 1.50, location, compartments) {} 
        
    // (Later, you'll add the virtual functions here if Locker has any)
};

#endif

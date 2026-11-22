#ifndef LOCKER_SYSTEM_COMPARTMENT_H
#define LOCKER_SYSTEM_COMPARTMENT_H

#include <string>
#include <chrono>
#include "ParcelSize.h"

class Compartment {
public:
    Compartment(int id, ParcelSize size, std::string pin, std::chrono::system_clock::time_point expiry);

    void unlock();
    void lock();
    void markOccupied();
    void markEmpty();
    bool isAvailable() const;
    ParcelSize getSize() const;

    std::string getPin() const;
    void setPin(std::string newPin);
    void setUsed(bool used);
    bool getIsUsed() const;

    std::chrono::system_clock::time_point getExpiryTime() const;
    void setExpiryTime(std::chrono::system_clock::time_point expiry);

    
private:

    int compartmentId_;
    ParcelSize size_;
    std::string pin_;
    std::chrono::system_clock::time_point expiryTime_;
    bool isUsed_;
    bool isOccupied_;
    bool isLocked_;
};

#endif

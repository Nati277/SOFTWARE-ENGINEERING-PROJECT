#ifndef LOCKER_SYSTEM_COMPARTMENT_H
#define LOCKER_SYSTEM_COMPARTMENT_H

#include <string>
#include <chrono>
#include "ParcelSize.h"

class Compartment {
public:
    // Constructor
    Compartment(int id, ParcelSize size, std::string pin, std::chrono::system_clock::time_point expiry);

    void unlock();
    void lock();
    void markOccupied();
    void markEmpty();
    bool isAvailable() const;
    ParcelSize getSize() const;

    std::string getPin() const;
    void setPin(std::string newPin);
    std::string getCode() const;
    void setUsed(bool used);
    bool getIsUsed() const;
    std::chrono::system_clock::time_point getExpiryTime() const;
    
private:

    int compartmentId_;
    ParcelSize size_;
    std::string pin_;
    std::string code_;
    std::chrono::system_clock::time_point expiryTime_;
    bool isUsed_;
    bool isOccupied_;
    bool isLocked_;
};

#endif

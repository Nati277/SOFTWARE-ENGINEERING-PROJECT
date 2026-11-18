#ifndef LOCKER_SYSTEM_COMPARTMENT_H
#define LOCKER_SYSTEM_COMPARTMENT_H

#include <string>
#include <chrono>
#include "ParcelSize.h"   // for ParcelSize enum

class Compartment {
private:
    // Your original attributes
    std::string code;
    std::chrono::system_clock::time_point expiryTime;
    bool isUsed;
    
    // The size of the compartment
    ParcelSize size_;
    
    // The PIN to open it
    std::string pin_;

public:
    // Constructor
    Compartment(ParcelSize size, std::string pin, std::chrono::system_clock::time_point expiry);

    // Getters
    ParcelSize getSize() const;
    std::string getPin() const;
    std::string getCode() const;
    bool getIsUsed() const;
    
    // Setters with validation
    void setPin(std::string newPin);
    void setUsed(bool used);
};

#endif // LOCKER_SYSTEM_COMPARTMENT_H

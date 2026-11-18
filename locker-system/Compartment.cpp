#include "Compartment.h"
#include <stdexcept>

// Constructor
Compartment::Compartment(ParcelSize size, std::string pin, std::chrono::system_clock::time_point expiry)
    : size_(size), pin_(pin), expiryTime(expiry), isUsed(false) 
{
    // Validate the PIN at creation too
    if (pin.length() != 4) 
        throw std::invalid_argument("PIN must be exactly 4 digits");
}

// Getters
ParcelSize Compartment::getSize() const { return size_; }
std::string Compartment::getPin() const { return pin_; }
std::string Compartment::getCode() const { return code; }
bool Compartment::getIsUsed() const { return isUsed; }

// Setters
void Compartment::setPin(std::string newPin) {
    if (newPin.length() != 4) 
        throw std::invalid_argument("PIN must be exactly 4 digits");
    pin_ = newPin;
}

void Compartment::setUsed(bool used) {
    isUsed = used;
}

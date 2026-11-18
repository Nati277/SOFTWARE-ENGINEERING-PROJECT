#include "Compartment.h"
#include <stdexcept>

// Constructor
Compartment::Compartment(int id, ParcelSize size, std::string pin, 
std::chrono::system_clock::time_point expiry)
: compartmentId_(id), size_(size), pin_(pin), expiryTime_(expiry), isUsed_(false), isLocked_(true)
{
    // Validate the PIN at creation too
    if (pin.length() != 4) 
        throw std::invalid_argument("PIN must be exactly 4 digits");
}

// Getters
ParcelSize Compartment::getSize() const { return size_; }
std::string Compartment::getPin() const { return pin_; }
std::string Compartment::getCode() const { return code_; }
bool Compartment::getIsUsed() const { return isUsed_; }

bool Compartment::isAvailable() const { return true; }

// Setters
void Compartment::setPin(std::string newPin) {
    if (newPin.length() != 4) 
        throw std::invalid_argument("PIN must be exactly 4 digits");
    pin_ = newPin;
}

void Compartment::setUsed(bool used) {
    isUsed_ = used;
}

#include "Compartment.h"
#include <stdexcept>

// Constructor
Compartment::Compartment(int id, ParcelSize size, std::string pin, 
std::chrono::system_clock::time_point expiry)
: compartmentId_(id), size_(size), pin_(pin), expiryTime_(expiry), isUsed_(false), isOccupied_(false), isLocked_(true)
{
    if (pin.length() != 4) 
        throw std::invalid_argument("The PIN must be 4 digits long");
}

// Getters
ParcelSize Compartment::getSize() const { return size_; }
std::string Compartment::getPin() const { return pin_; }
bool Compartment::getIsUsed() const { return isUsed_; }
std::chrono::system_clock::time_point Compartment::getExpiryTime() const { return expiryTime_; } // expiry time getter

void Compartment::unlock() {
    isLocked_ = false;
}

void Compartment::lock()
{
    isLocked_ = true;
}

bool Compartment::isAvailable() const
{
    return isOccupied_ == false;
}

void Compartment::markOccupied()
{
    isOccupied_ = true;
}

void Compartment::markEmpty()
{
    isOccupied_ = false;
}

// Setters
void Compartment::setPin(std::string newPin) {
    if (newPin.length() != 4) 
        throw std::invalid_argument("The PIN must be 4 digits long");
    pin_ = newPin;
}

void Compartment::setUsed(bool used) {
    isUsed_ = used;
}

void Compartment::setExpiryTime(std::chrono::system_clock::time_point expiry) {
    expiryTime_ = expiry;
}

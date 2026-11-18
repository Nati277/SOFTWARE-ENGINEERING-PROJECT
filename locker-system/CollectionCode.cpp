#include "CollectionCode.h"
#include <string>
#include <cstdlib>
#include <ctime>

using std::string;


std::string CollectionCode::generate() 
{
    std::string newCode = "";
    for (int i = 0; i < 4; i++)  // creates 4 digit code now
    {
        newCode = newCode + (char)('0' + rand() % 10); 
    }
    return newCode;
}

Validation CollectionCode::validate(const std::string& input, const Compartment& compartment)
{
    if (input != compartment.getPin() || compartment.getIsUsed()) // if the code is wrong, or its already used
        {
        return Validation::INVALID;
    }
    else if (std::chrono::system_clock::now() > compartment.getExpiryTime()) // if we are past the expiry time
    {
        return Validation::EXPIRED;
    }

    return Validation::VALID;
}
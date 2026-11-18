#include "CollectionCode.h"
#include <string>
#include <cstdlib>
#include <ctime>

using std::string;

// Removed the constructor entirely because CollectionCode doesn't own those variables anymore.

std::string CollectionCode::generate() 
{
    std::string newCode = "";
    for (int i = 0; i < 8; i++) 
    {
        newCode = newCode + (char)('0' + rand() % 10); 
    }
    return newCode;
}

Validation CollectionCode::validate(const std::string& input) 
{
    // For now, just returning VALID so the compiler stops complaining.
    // You can add real validation logic here later!
    if (input.length() == 8) {
        return Validation::VALID;
    }
    return Validation::INVALID;
}

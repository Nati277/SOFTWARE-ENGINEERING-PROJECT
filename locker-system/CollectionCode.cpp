#include "CollectionCode.h"

#include "CollectionCode.h"

#include <cstdlib>
#include <ctime>
#include <string>
using std::string;


CollectionCode::CollectionCode(): code(), expiryTime(), isUsed(false)
{
}

std::string CollectionCode::generate() // generation function
{
    code ="";
    for (int i = 0; i < 8; i++) // I chose there to be 8 digits for the code to be for now until further notice
    {
        code = code + (char)('0' + rand() % 10); //
    }

    expiryTime = std::chrono::system_clock::now() + std::chrono::seconds(6); // sets expiryTime so 6 secs from now it expires, if realistic much longer
    isUsed = false;
    return code;

}

Validation CollectionCode::validate(const std::string& input)
{
    // validate function gonna be here
}
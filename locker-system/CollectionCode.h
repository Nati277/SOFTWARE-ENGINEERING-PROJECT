

#ifndef LOCKER_SYSTEM_COLLECTIONCODE_H
#define LOCKER_SYSTEM_COLLECTIONCODE_H
#include <chrono>
#include "Validation.h"

using std::string;


class CollectionCode
{

public:
    CollectionCode();

    string generate();

    Validation validate(const string& input); // using the enumeration we agreed on TEMP NAME CHANGE LATER

private:

    string code;
    std::chrono::system_clock::time_point expiryTime; // Design uses datetime, chrono stuff seems closest
    bool isUsed;

};


#endif //LOCKER_SYSTEM_COLLECTIONCODE_H
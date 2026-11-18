#ifndef LOCKER_SYSTEM_COLLECTIONCODE_H
#define LOCKER_SYSTEM_COLLECTIONCODE_H

#include <string>
#include "Validation.h"
#include "Compartment.h" // to access new parts


class CollectionCode {
public:
    std::string generate();
    Validation validate(const std::string& input, const Compartment& compartment); // now accessing compartment so it can work
};

#endif

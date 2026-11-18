#ifndef LOCKER_SYSTEM_COLLECTIONCODE_H
#define LOCKER_SYSTEM_COLLECTIONCODE_H

#include <string>
#include "Validation.h"

class CollectionCode {
public:
    std::string generate();
    Validation validate(const std::string& input);
};

#endif

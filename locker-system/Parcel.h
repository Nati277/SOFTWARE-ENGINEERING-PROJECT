//
// Created by antia on 06/11/2026.
//

#ifndef LOCKER_SYSTEM_PARCEL_H
#define LOCKER_SYSTEM_PARCEL_H
#include <string>
#include "ParcelSize.h"
using std::string;

class Parcel {

public:
    Parcel(int parcelId, string barcode, Validation size, double weightKg);

    // getters so it accesses the private stuff.
    string getBarcode() const;
    Validation getSize() const;

    // design doesn't get weight or id for parcel

private:
    int parcelId;
    string barcode;
    Validation size; // using enumeration
    double weightKg;
};


#endif //LOCKER_SYSTEM_PARCEL_H
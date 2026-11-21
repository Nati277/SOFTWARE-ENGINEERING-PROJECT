#ifndef LOCKER_SYSTEM_PARCEL_H
#define LOCKER_SYSTEM_PARCEL_H
#include <string>
#include "ParcelSize.h"
using std::string;

class Parcel {

public:
    Parcel(int parcelId, string barcode, ParcelSize size, double weightKg);


    string getBarcode() const;
    ParcelSize getSize() const;


private:
    int parcelId;
    string barcode;
    ParcelSize size; // using enumeration
    double weightKg;
};


#endif //LOCKER_SYSTEM_PARCEL_H

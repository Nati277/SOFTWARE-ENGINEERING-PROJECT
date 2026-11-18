//
// Created by antia on 06/11/2026.
//

#include "Parcel.h"
using std::string;


Parcel::Parcel(int parcelId, string barcode, ParcelSize size, double weightKg) //
    : parcelId(parcelId), barcode(barcode), size(size), weightKg(weightKg) {} // sets initial attributes
                                                                                 // empty brackets because everything is stored/set no extra code needed
string Parcel::getBarcode() const {
    return barcode;
}
ParcelSize Parcel::getSize() const {
    return size;
}

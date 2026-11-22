//
// Created by antia on 06/11/2026.
//

#include "Parcel.h"
using std::string;


Parcel::Parcel(int parcelId, string barcode, ParcelSize size, double weightKg) //
    : parcelId_(parcelId), barcode_(barcode), size_(size), weightKg_(weightKg) {} // sets initial attributes
                                                                                 // empty brackets because everything is stored/set no extra code needed
string Parcel::getBarcode() const {
    return barcode_;
}
ParcelSize Parcel::getSize() const {
    return size_;
}


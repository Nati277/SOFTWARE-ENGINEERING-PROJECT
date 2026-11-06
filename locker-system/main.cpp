#include <iostream>
#include "Recipient.h"
#include "Parcel.h"

int main() {
     Recipient r(1, "Test", "08892517929");
     r.receiveNotification("Your parcel is ready. Code: 4821");

    Parcel p(1, "BC12345", ParcelSize::MEDIUM, 2.5);
    std::cout << p.getBarcode() << "\n";
    std::cout << (p.getSize() == ParcelSize::MEDIUM ? "medium" : "other") << "\n";
    return 0;
}

#include <iostream>
#include "Recipient.h"
#include <iostream>
#include <vector>
#include <memory>
#include "SmallLocker.h"
#include "Compartment.h"
#include <chrono>
#include <cstdlib>
#include <ctime>

int main()
{
    srand(time(0));
    
    std::cout << "--- LOCKER SYSTEM DEMO ---" << std::endl;

    // 1. Create a Compartment
    auto now = std::chrono::system_clock::now();
    Compartment comp1(1, ParcelSize::SMALL, "1234", now);

    // 2. Put it in a vector
    std::vector<Compartment> myCompartments;
    myCompartments.push_back(comp1);

    // 3. Create a SmallLocker (This is Inheritance!)
    SmallLocker myLocker(100, "Main Hall", myCompartments);

    // 4. Prove Polymorphism works
    std::cout << "Locker Fee (should be 1.50): " << myLocker.calculateFee() << std::endl;
    std::cout << "Locker Occupancy: " << myLocker.getOccupancyRate() << std::endl;

    return 0;
}

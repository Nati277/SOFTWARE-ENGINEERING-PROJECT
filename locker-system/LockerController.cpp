//
// Created by antia on 22/11/2026.
//

#include "LockerController.h"

#include <chrono>
#include <iostream>
#include "CollectionCode.h"
#include "Notification.h"
#include "Validation.h"

using std::string;

bool LockerController::depositParcel(Delivery& delivery, Locker& locker)
{

    Compartment* compartment = locker.findAvailableCompartment(delivery.getParcel().getSize());

    if (compartment == 0) {
        return false;
    }
    // compartment exists so can move on

    Compartment& com = *compartment; // gets the specific compartment

    com.unlock();

    // parcel should be placed after

    com.lock(); // locks after again
    com.markOccupied();

    delivery.setCompartment(&com);

    delivery.updateStatus(DeliveryStatus::READY_FOR_COLLECTION);

    CollectionCode CC; // CC stands for collection code // im making a new object here

    string newCode = CC.generate(); // stores new code

    com.setPin(newCode); // stores new code in setpin in compartment

    com.setExpiryTime(std::chrono::system_clock::now() + std::chrono::seconds(6));

    com.setUsed(false);

    notifyRecipient(delivery); // method under this one


    return true;
}

void LockerController::notifyRecipient(Delivery &delivery)
{

    Compartment* com = delivery.getCompartment();


    string pin = com->getPin();

    string msg = "Your parcel is now ready. The code is " + pin;

    Notification message(msg);

    message.send(delivery.getRecipient());

}

bool LockerController::collectParcel(string code, Delivery& delivery)
{

    Compartment* com = delivery.getCompartment();

    if (com == 0) // no parcel deposited condition
    {
        return false;
    }

    CollectionCode CC;

    Validation result = CC.validate(code, *com);

    if (result == Validation::INVALID) {
        std::cout<<"Invalid code - try again" << std::endl;
        return false;
    }
    if (result == Validation::EXPIRED) {
    delivery.updateStatus(DeliveryStatus::EXPIRED);

    Notification msg("Parcel expired - returning to sender");
    msg.send(delivery.getRecipient());

    std::cout << "Code expired" << std::endl; // both messages go console but would be different places if actual system
    return false;
}
    if (result == Validation::VALID) {
        if (delivery.isReadyForCollection() == false) {
            return false;
        }
    }

    com->unlock();

    com->lock();
    com->setUsed(true);
    com->markEmpty();
    delivery.updateStatus(DeliveryStatus::COLLECTED);
    return true;
}




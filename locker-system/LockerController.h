//
// Created by antia on 22/11/2026.
//

#ifndef LOCKER_SYSTEM_LOCKERCONTROLLER_H
#define LOCKER_SYSTEM_LOCKERCONTROLLER_H

#include <string>
using std::string;
#include "Delivery.h"
#include "Locker.h"



class LockerController {

public:
    bool depositParcel(Delivery& delivery,Locker& locker);

    bool collectParcel(string code,Delivery& delivery);

    void notifyRecipient(Delivery& delivery);


};


#endif //LOCKER_SYSTEM_LOCKERCONTROLLER_H
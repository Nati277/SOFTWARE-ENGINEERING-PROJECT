//
// Created by antia on 04/11/2026.
//

#ifndef LOCKER_SYSTEM_DELIVERYSTATUS_H
#define LOCKER_SYSTEM_DELIVERYSTATUS_H

/// enumeration limits value of deliverystatus to these fixed options


enum class DeliveryStatus {
    CREATED,
    DEPOSITED,
    READY_FOR_COLLECTION,
    COLLECTED,
    EXPIRED
};


#endif //LOCKER_SYSTEM_DELIVERYSTATUS_H
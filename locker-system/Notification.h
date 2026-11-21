#ifndef LOCKER_SYSTEM_NOTIFICATION_H
#define LOCKER_SYSTEM_NOTIFICATION_H

#include "Recipient.h"
#include <string>
#include <chrono>


class Notification {
public:
    Notification(const std::string& message);

    bool send(Recipient recipient);

private:
    std::string message_;
    std::chrono::system_clock::time_point sentAt_; // same as dateTime in my opinion
};


#endif //LOCKER_SYSTEM_NOTIFICATION_H
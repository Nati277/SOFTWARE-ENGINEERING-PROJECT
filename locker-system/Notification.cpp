#include "Notification.h"

Notification::Notification(const std::string& message): message_(message), sentAt_(){}

bool Notification::send(Recipient recipient)
{

    sentAt_ = std::chrono::system_clock::now();

    recipient.receiveNotification(message_); // the notification here is using recipients receiveNotif function

    return true;
}
//
// Created by antia on 04/11/2026.
//

// header file so it declares whereas the cpp file focuses on the how

#ifndef LOCKER_SYSTEM_RECIPIENT_H
#define LOCKER_SYSTEM_RECIPIENT_H
#include <string>
using std::string;

class Recipient {
public:
    Recipient(int recipientId, string name, string phone); // constructor is announced here, will be called when object initialises

    // getters

    int getRecipientId() const;
    string getName() const;
    string getPhone() const;

    void receiveNotification(string message);

private:
    int recipientId_;
    string name_;
    string phone_;
};

#endif //LOCKER_SYSTEM_RECIPIENT_H

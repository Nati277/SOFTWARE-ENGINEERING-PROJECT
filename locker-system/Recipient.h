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


    // the following are getters (access private stuff without changing it)

    int getRecipientId() const;
    string getName() const;
    string getPhone() const;

    void receiveNotification(string message);

private: // private so it's a usecase of encapsulation
    int recipientId;
    string name;
    string phone;
};

#endif //LOCKER_SYSTEM_RECIPIENT_H

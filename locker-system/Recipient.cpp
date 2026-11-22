#include "Recipient.h"
#include <iostream>

using std::string;
using std::cout;

Recipient::Recipient(int recipientId, string name, string phone) // constructor so called when object initialised
    :recipientId_(recipientId), name_(name), phone_(phone) {} // initialiser list, this basically fills in the private variables

int Recipient::getRecipientId() const
{
    return recipientId_;
}
string Recipient::getName() const
{
    return name_;
}
string Recipient::getPhone() const
{
    return phone_;
}


void Recipient::receiveNotification(string message)
{
    std::cout << name_ << " [" << phone_ << "]" << " has received a text: " << message << "\n";
}

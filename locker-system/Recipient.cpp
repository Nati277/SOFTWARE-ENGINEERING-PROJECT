#include "Recipient.h"
#include <iostream>

using std::string;
using std::cout;

Recipient::Recipient(int recipientId, string name, string phone) // constructor so called when object initialised
    :recipientId(recipientId), name(name), phone(phone) {} // initialiser list, this basically fills in the private variables

int Recipient::getRecipientId() const
{
    return recipientId;
}
string Recipient::getName() const
{
    return name;
}
string Recipient::getPhone() const
{
    return phone;
}
// prints statement to the recipient
void Recipient::receiveNotification(string message)
{
    std::cout << name << " [" << phone << "]" << " has received a text: " << message << "\n";
}

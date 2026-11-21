#ifndef LOCKER_SYSTEM_DELIVERY_H
#define LOCKER_SYSTEM_DELIVERY_H

#include "Recipient.h"
#include "Compartment.h"
#include "DeliveryStatus.h"
#include "Parcel.h"




class Delivery {
public:

        Delivery(int deliveryId, const Parcel& parcel, const Recipient& recipient);

        void updateStatus(DeliveryStatus newStatus);
        bool isReadyForCollection() const;
        void setCompartment(Compartment* compartment);


        // needed these getters
        int getDeliveryId() const;
        Parcel getParcel() const;
        Recipient getRecipient() const;
        Compartment* getCompartment() const;

private:
        int deliveryId_;
        DeliveryStatus status_;

        Parcel parcel_;
        Compartment* compartment_; // pointer to the actual compartment address

        Recipient recipient_;
};


#endif //LOCKER_SYSTEM_DELIVERY_H
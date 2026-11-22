#include "Delivery.h"


Delivery::Delivery(int deliveryId, const Parcel& parcel, const Recipient& recipient) :
deliveryId_(deliveryId), status_(DeliveryStatus::CREATED), parcel_(parcel),compartment_(nullptr) ,recipient_(recipient) {}

int Delivery::getDeliveryId() const {
    return deliveryId_;
}

void Delivery::setCompartment(Compartment* compartment)
{
    compartment_ = compartment;
}

Parcel Delivery::getParcel() const {
    return parcel_;
}

Compartment* Delivery::getCompartment() const {
    return compartment_;
}


Recipient Delivery::getRecipient() const {
    return recipient_;
}

void Delivery::updateStatus(DeliveryStatus newStatus)
{
    status_ = newStatus;
}

bool Delivery::isReadyForCollection() const
{
    if (status_ == DeliveryStatus::READY_FOR_COLLECTION) {
        return true;
    }
    else
    {
        return false;
    }
}



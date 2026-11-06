cmake_minimum_required(VERSION 4.0)
project(locker_system)

set(CMAKE_CXX_STANDARD 20)

add_executable(locker_system main.cpp
        ParcelSize.h
        DeliveryStatus.h
        Recipient.cpp
        Recipient.h
        Parcel.cpp
        Parcel.h
        Compartment.cpp
        Compartment.h)

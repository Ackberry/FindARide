#pragma once
#include "location.h"
#include <string>       

enum class DriverStatus {
        AVAILABLE,
        BUSY,
        OFFLINE
};

class Driver {
    public:
    std::string ID;
    std::string driverName;
    Location driverLocation;
    double driverRating;
    DriverStatus status;

    Driver(const std::string& ID; const std::string& driverName, Location& driverLocation, double driverRating = 5.0);

};
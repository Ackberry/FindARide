#include "location.h"
#include <iostream>

double taxiLat = 28.0581;
double taxiLong = -82.4164;

double myLat = 28.0580;
double myLong = -82.4164;

int main() {
    Location taxi(taxiLat, taxiLong);
    Location me(myLat, myLong);

    double distance = taxi.distanceTo(me);
    std::cout << "Distance: " << distance << " km" << std::endl;


    return 0;
}


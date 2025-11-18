#include <location.h>
#include <cmath>

Location::Location(double lat, double lon)
    : latitude(lat), longitude(lon) {}

double Location:distanceTo(const Location& other) const {
    const double R = 6371.0; //Earth Radius

    double lat1Rad = latitude * M_PI / 180.0;
    double lat2Rad = other.latitude * M_PI / 180.0;
    double deltaLat = (other.latitude - latitude) * M_PI / 180.0;
    double deltaLon = (other.longitude - longitude) * M_PI / 180.0;


    double a = sin(deltaLat / 2) * sin(deltaLat / 2) + cos(lat1Rad) * cos(lat2Rad) * sin(deltaLon / 2) * sin(deltaLon / 2);

    double c = 2 * atan2(sqrt(a), sqrt(1-a));

    return R * c;
    
}
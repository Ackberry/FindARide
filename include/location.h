#pragma once

class Location {
    public:
        
        double latitude;
        double longitude;

        Location(double lat = 0.0, double lon = 0.0);

        double distanceTo(const Location& other) const;
    
    private:

};





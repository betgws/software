/**
 * Project Untitled
 */


#ifndef _BIKE_H
#define _BIKE_H
#include <string>

using namespace std;

class Bike {
public: 
    
    Bike(string bikeId, string bikeType);
    void setIsRented(bool isRented);
    string getBikeId() { return bikeId; }
    string getBikeType() { return bikeType; }
private: 
    string bikeId;
    string bikeType;
    bool isRented;
};

#endif //_BIKE_H
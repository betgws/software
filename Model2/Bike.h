/**
 * Project Untitled
 */


#ifndef _BIKE_H
#define _BIKE_H
#include <string>

using namespace std;

class Bike {
public: 
    
/**
 * @param bikeId
 * @param bikeType
 */
 Bike(char bikeId, string bikeType);
    
/**
 * @param isRented
 */
void setIsRented(bool isRented);
private: 
    int bikeId;
    char bikeType;
    bool isRented;
};

#endif //_BIKE_H
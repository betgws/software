#pragma once
#pragma once
#include <vector>
#include <string>
#include "Bike.h"

class BikeTable {
private:
    std::vector<Bike*> bikeList; 
public:
    void addBike(Bike* bike);              
    std::vector<Bike*> getAllBikes();      
    Bike* findBikeById(string bikeId);
};
/**
 * Project Untitled
 */


#ifndef _ADDBIKE_H
#define _ADDBIKE_H

#include "RegisterBikeUI.h"
#include "BikeTable.h"

class AddBike {
public: 
    
    AddBike(BikeTable* bikeTable);
    void registerBike(string bikeId, string bikeType);
    RegisterBikeUI* getBikeUI() { return registerBikeUI; }


private: 
    RegisterBikeUI* registerBikeUI;
    BikeTable* bikeTable;
};

#endif //_ADDBIKE_H
/**
 * Project Untitled
 */


#ifndef _RENTALUI_H
#define _RENTALUI_H

#include "RentalBike.h"
#include "File.h"

class RentalBike;

class RentalUI {

public: 
    
    void startinterface();
    void selectBike(RentalBike* rentalBike, File* file);
};

#endif //_RENTALUI_H
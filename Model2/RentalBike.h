/**
 * Project Untitled
 */


#ifndef _RENTALBIKE_H
#define _RENTALBIKE_H

#include "BikeTable.h"
#include "UserTable.h"
#include "RentalUI.h"


class RentalUI;

class RentalBike {
public: 

	RentalBike(BikeTable* bikeTable, UserTable* userTable);
	string rentalBike(string bikeId);
	RentalUI* getRentalUI() { return rentalUI; }

private:
	RentalUI* rentalUI;
	BikeTable* bikeTable;
	UserTable* userTable;

};

#endif //_RENTALBIKE_H
#pragma once


#include "BikeTable.h"
#include "UserTable.h"


class RentalListUI;


class RentalList {
private:
    BikeTable* bikeTable;
    UserTable* userTable;
    RentalListUI* rentalListUI;

public:
    RentalList(BikeTable* bikeTable, UserTable* userTable);
    vector<Bike*> listBikes(); 
    RentalListUI* getRentalListUI() { return rentalListUI; }
};

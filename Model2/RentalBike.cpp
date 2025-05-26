/**
 * Project Untitled
 */


#include "RentalBike.h"
#include "BikeTable.h"
#include "UserTable.h"
#include "Member.h"
#include "RentalUI.h" 

#include <iostream>

class RentalUI;

/*
 * 함수 이름 : RentalBike
 * 기능 : RentalBIke 생성자
 * 전달 인자 : BikeTable*, UserTable*
 * 반환값 : 없음
 */
RentalBike::RentalBike(BikeTable* bikeTable, UserTable* userTable) {
    this->bikeTable = bikeTable;
    this->userTable = userTable;
    rentalUI = new RentalUI();
    rentalUI->startinterface();
}


/*
 * 함수 이름 : rentalBike
 * 기능 : 로그인한 멤버에 대해 바이크 대여
 * 전달 인자 : string
 * 반환값 : string
 */
string RentalBike::rentalBike(string bikeId) {

    Bike* bike = bikeTable->findBikeById(bikeId);
    bike->setIsRented(true);
    string bikeType = bike->getBikeType();

    int loginIndex = userTable->getLoginIndex();
    if (loginIndex >= 0) {
        User* loggedInUser = userTable->getAllUsers()[loginIndex];

        Member* currentMember = dynamic_cast<Member*>(loggedInUser);
        if (currentMember) {
            currentMember->addRentedList(bikeId);
        }
    }

    return bikeType;

}



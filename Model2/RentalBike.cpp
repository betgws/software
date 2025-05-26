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
 * �Լ� �̸� : RentalBike
 * ��� : RentalBIke ������
 * ���� ���� : BikeTable*, UserTable*
 * ��ȯ�� : ����
 */
RentalBike::RentalBike(BikeTable* bikeTable, UserTable* userTable) {
    this->bikeTable = bikeTable;
    this->userTable = userTable;
    rentalUI = new RentalUI();
    rentalUI->startinterface();
}


/*
 * �Լ� �̸� : rentalBike
 * ��� : �α����� ����� ���� ����ũ �뿩
 * ���� ���� : string
 * ��ȯ�� : string
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



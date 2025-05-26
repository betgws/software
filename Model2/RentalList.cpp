#include "RentalList.h"
#include "Member.h" // Member 클래스의 정의가 필요
#include "RentalListUI.h"
#include <iostream>

using namespace std;


/*
 * 함수 이름 : RentalList
 * 기능 : RentalList 생성자
 * 전달 인자 : BikeTable*, userTable*
 * 반환값 : 없음
 */
RentalList::RentalList(BikeTable* bikeTable, UserTable* userTable) {
    this->bikeTable = bikeTable;
    this->userTable = userTable;
    rentalListUI = new RentalListUI();
    rentalListUI->startinterface();
}


/*
 * 함수 이름 : listBikes
 * 기능 : 해당 멤버가 대여한 바이크 리스트 반환
 * 전달 인자 : 없음
 * 반환값 : vector<Bike*>
 */
vector<Bike*> RentalList::listBikes() {
    vector<Bike*> result;

    int loginIndex = userTable->getLoginIndex();
    User* user = userTable->getAllUsers()[loginIndex];

    Member* member = dynamic_cast<Member*>(user);

    vector<string> bikeIds = member->getRentedBikeIds();

    for (string id : bikeIds) {
        Bike* bike = bikeTable->findBikeById(id);
        if (bike != nullptr) {
            result.push_back(bike);
        }
    }

    return result;
}

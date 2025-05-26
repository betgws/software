#include "RentalList.h"
#include "Member.h" // Member Ŭ������ ���ǰ� �ʿ�
#include "RentalListUI.h"
#include <iostream>

using namespace std;


/*
 * �Լ� �̸� : RentalList
 * ��� : RentalList ������
 * ���� ���� : BikeTable*, userTable*
 * ��ȯ�� : ����
 */
RentalList::RentalList(BikeTable* bikeTable, UserTable* userTable) {
    this->bikeTable = bikeTable;
    this->userTable = userTable;
    rentalListUI = new RentalListUI();
    rentalListUI->startinterface();
}


/*
 * �Լ� �̸� : listBikes
 * ��� : �ش� ����� �뿩�� ����ũ ����Ʈ ��ȯ
 * ���� ���� : ����
 * ��ȯ�� : vector<Bike*>
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

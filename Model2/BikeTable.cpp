#include "BikeTable.h"


/*
 * �Լ� �̸� : addBike
 * ��� : ����ũ �߰�
 * ���� ���� : Bike*
 * ��ȯ�� : ����
 */
void BikeTable::addBike(Bike* bike) {
    bikeList.push_back(bike);
}

/*
 * �Լ� �̸� : getAllBIkes
 * ��� : ��� ��ϵ� ����Ʈ ��ȯ
 * ���� ���� : ����
 * ��ȯ�� : vector<Bike*>
 */
vector<Bike*> BikeTable::getAllBikes() {
    return bikeList;
}

/*
 * �Լ� �̸� : findBikeById
 * ��� : ����ũ ���̵�� ����ũ ��ȯ
 * ���� ���� : string
 * ��ȯ�� : Bike*
 */
Bike* BikeTable::findBikeById(string bikeId) {
    for (Bike* b : bikeList) {
        if (b->getBikeId() == bikeId) {
            return b;
        }
    }
}
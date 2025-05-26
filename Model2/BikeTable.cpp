#include "BikeTable.h"


/*
 * 함수 이름 : addBike
 * 기능 : 바이크 추가
 * 전달 인자 : Bike*
 * 반환값 : 없음
 */
void BikeTable::addBike(Bike* bike) {
    bikeList.push_back(bike);
}

/*
 * 함수 이름 : getAllBIkes
 * 기능 : 모든 등록된 리스트 반환
 * 전달 인자 : 없음
 * 반환값 : vector<Bike*>
 */
vector<Bike*> BikeTable::getAllBikes() {
    return bikeList;
}

/*
 * 함수 이름 : findBikeById
 * 기능 : 바이크 아이디로 바이크 반환
 * 전달 인자 : string
 * 반환값 : Bike*
 */
Bike* BikeTable::findBikeById(string bikeId) {
    for (Bike* b : bikeList) {
        if (b->getBikeId() == bikeId) {
            return b;
        }
    }
}
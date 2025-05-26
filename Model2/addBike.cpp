/**
 * Project Untitled
 */


#include "AddBike.h"
#include "File.h"
#include <string>
#include "RegisterBikeUI.h"

using namespace std;

/*
 * 함수 이름 : AddBike
 * 기능 : AddBike 생성자
 * 전달 인자 : BikeTable*
 * 반환값 : 없음
 */
AddBike::AddBike(BikeTable* bikeTable) {
	this->bikeTable = bikeTable;
	registerBikeUI = new RegisterBikeUI();
	registerBikeUI->startinterface();
}

/*
 * 함수 이름 : registerBike
 * 기능 : 바이크를 등록하고 BikeTable에 등록
 * 전달 인자 : string, string
 * 반환값 : 없음
 */
void AddBike::registerBike(string bikeId,  string bikeType) {

	Bike* newBike = new Bike(bikeId, bikeType);
	bikeTable->addBike(newBike);

}
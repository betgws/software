/**
 * Project Untitled
 */


#include "Bike.h"
#include <string>

using namespace std;

/*
 * 함수 이름 : Bike
 * 기능 : Bike 생성자
 * 전달 인자 : string, string
 * 반환값 : 없음
 */
Bike::Bike(string bikeId, string bikeType) {
	this->bikeId = bikeId;
	this->bikeType = bikeType;

}

/*
 * 함수 이름 : setIsRented
 * 기능 : 해당 바이크가 렌탈 되었음을 표기
 * 전달 인자 : bool
 * 반환값 : 없음
 */
void Bike::setIsRented(bool isRented) {
	this->isRented = isRented;
}
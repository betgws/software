
#include "RentalUI.h"
#include "RentalBike.h"
#include "File.h"
#include <iostream>

/*
 * 함수 이름 :startInterface
 * 기능 : 이번 과제에서는 파일 입출력이기 때문에 아무런 기능을 하지 않음.
 * 전달 인자 : 없음
 * 반환값 : 없음
 */
void RentalUI::startinterface() {

}

/*
 * 함수 이름 : selectBike
 * 기능 : 결과 출력
 * 전달 인자 : RentalBike*, File*
 * 반환값 : 없음
 */
void RentalUI::selectBike(RentalBike* rentalBike, File* file) {

	string bikeId = "";

	file->ifs.seekg(file->readed);
	file->ifs >> bikeId;
	file->readed = file->ifs.tellg();

	string bikeType = rentalBike->rentalBike(bikeId);

	file->ofs << "4.1. 자전거 대여" << '\n';
	file->ofs << "> " << bikeId << " " << bikeType << " " << '\n' << '\n';
}
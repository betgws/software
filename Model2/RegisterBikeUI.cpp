

#include <iostream>

#include "RegisterBikeUI.h"
#include "AddBike.h"
#include "FIle.h"


/*
 * 함수 이름 :startInterface
 * 기능 : 이번 과제에서는 파일 입출력이기 때문에 아무런 기능을 하지 않음.
 * 전달 인자 : 없음
 * 반환값 : 없음
 */
void RegisterBikeUI::startinterface() {

}

/*
 * 함수 이름 : registerBike
 * 기능 : 결과 출력
 * 전달 인자 : AddBike*, File*
 * 반환값 : 없음
 */
void RegisterBikeUI::registerBike(AddBike* addBike, File* file) {

	string bikeId;
	string bikeType = "";

	file->ifs.seekg(file->readed);
	file->ifs >> bikeId >> bikeType;

	if (file->ifs.fail()) {
		std::cerr << "[ERROR] bikeId 또는 bikeType 읽기 실패\n";
		return;
	}

	file->readed = file->ifs.tellg();
	addBike->registerBike(bikeId, bikeType);
	file->ofs << "3.1. 자전거 등록" << '\n';
	file->ofs << "> " << bikeId << " " << bikeType << " " << '\n' << '\n';


}


#include <iostream>

#include "RegisterBikeUI.h"
#include "AddBike.h"
#include "FIle.h"


/*
 * �Լ� �̸� :startInterface
 * ��� : �̹� ���������� ���� ������̱� ������ �ƹ��� ����� ���� ����.
 * ���� ���� : ����
 * ��ȯ�� : ����
 */
void RegisterBikeUI::startinterface() {

}

/*
 * �Լ� �̸� : registerBike
 * ��� : ��� ���
 * ���� ���� : AddBike*, File*
 * ��ȯ�� : ����
 */
void RegisterBikeUI::registerBike(AddBike* addBike, File* file) {

	string bikeId;
	string bikeType = "";

	file->ifs.seekg(file->readed);
	file->ifs >> bikeId >> bikeType;

	if (file->ifs.fail()) {
		std::cerr << "[ERROR] bikeId �Ǵ� bikeType �б� ����\n";
		return;
	}

	file->readed = file->ifs.tellg();
	addBike->registerBike(bikeId, bikeType);
	file->ofs << "3.1. ������ ���" << '\n';
	file->ofs << "> " << bikeId << " " << bikeType << " " << '\n' << '\n';


}
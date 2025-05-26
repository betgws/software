
#include "RentalUI.h"
#include "RentalBike.h"
#include "File.h"
#include <iostream>

/*
 * �Լ� �̸� :startInterface
 * ��� : �̹� ���������� ���� ������̱� ������ �ƹ��� ����� ���� ����.
 * ���� ���� : ����
 * ��ȯ�� : ����
 */
void RentalUI::startinterface() {

}

/*
 * �Լ� �̸� : selectBike
 * ��� : ��� ���
 * ���� ���� : RentalBike*, File*
 * ��ȯ�� : ����
 */
void RentalUI::selectBike(RentalBike* rentalBike, File* file) {

	string bikeId = "";

	file->ifs.seekg(file->readed);
	file->ifs >> bikeId;
	file->readed = file->ifs.tellg();

	string bikeType = rentalBike->rentalBike(bikeId);

	file->ofs << "4.1. ������ �뿩" << '\n';
	file->ofs << "> " << bikeId << " " << bikeType << " " << '\n' << '\n';
}
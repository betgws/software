
using namespace std;


#include "RentalListUI.h"
#include <vector>
#include <iostream>


/*
 * �Լ� �̸� :startInterface
 * ��� : �̹� ���������� ���� ������̱� ������ �ƹ��� ����� ���� ����.
 * ���� ���� : ����
 * ��ȯ�� : ����
 */
void RentalListUI::startinterface() {

}

/*
 * �Լ� �̸� : selectRentalLIst
 * ��� : ��� ����
 * ���� ���� : RentalList*, File*
 * ��ȯ�� : ����
 */
void RentalListUI::selectRentalList(RentalList* rentalList, File* file) {



	vector<Bike*> bikes = rentalList->listBikes();

	file->ofs << "5.1. ������ �뿩 ����Ʈ" << '\n';
	for (Bike* bike : bikes) {
		file->ofs << "> " << bike->getBikeId() << " " << bike->getBikeType() << '\n';
	}

	file->ofs << '\n';

};
/**
 * Project Untitled
 */


#include "AddBike.h"
#include "File.h"
#include <string>
#include "RegisterBikeUI.h"

using namespace std;

/*
 * �Լ� �̸� : AddBike
 * ��� : AddBike ������
 * ���� ���� : BikeTable*
 * ��ȯ�� : ����
 */
AddBike::AddBike(BikeTable* bikeTable) {
	this->bikeTable = bikeTable;
	registerBikeUI = new RegisterBikeUI();
	registerBikeUI->startinterface();
}

/*
 * �Լ� �̸� : registerBike
 * ��� : ����ũ�� ����ϰ� BikeTable�� ���
 * ���� ���� : string, string
 * ��ȯ�� : ����
 */
void AddBike::registerBike(string bikeId,  string bikeType) {

	Bike* newBike = new Bike(bikeId, bikeType);
	bikeTable->addBike(newBike);

}
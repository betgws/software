/**
 * Project Untitled
 */


#include "Bike.h"
#include <string>

using namespace std;

/*
 * �Լ� �̸� : Bike
 * ��� : Bike ������
 * ���� ���� : string, string
 * ��ȯ�� : ����
 */
Bike::Bike(string bikeId, string bikeType) {
	this->bikeId = bikeId;
	this->bikeType = bikeType;

}

/*
 * �Լ� �̸� : setIsRented
 * ��� : �ش� ����ũ�� ��Ż �Ǿ����� ǥ��
 * ���� ���� : bool
 * ��ȯ�� : ����
 */
void Bike::setIsRented(bool isRented) {
	this->isRented = isRented;
}
/**
 * Project Untitled
 */


#include "Member.h"
#include "AddMember.h"
#include <string>
#include <vector>

using namespace std;

/*
 * �Լ� �̸� : addRentalList
 * ��� : �ش� ����� �뿩�� ������ ����Ʈ 
 * ���� ���� : string
 * ��ȯ�� : ����
 */
void Member::addRentedList(string bikeId) {
	rentedBikeIds.push_back(bikeId);
}

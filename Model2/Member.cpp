/**
 * Project Untitled
 */


#include "Member.h"
#include "AddMember.h"
#include <string>
#include <vector>

using namespace std;

/*
 * 함수 이름 : addRentalList
 * 기능 : 해당 멤버가 대여한 자전거 리스트 
 * 전달 인자 : string
 * 반환값 : 없음
 */
void Member::addRentedList(string bikeId) {
	rentedBikeIds.push_back(bikeId);
}

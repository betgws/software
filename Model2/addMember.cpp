/**
 * Project Untitled
 */


#include "addMember.h"
#include "RegisterUI.h"
#include "Member.h"
#include "UserTable.h"
#include <string>

using namespace std;

/*
 * 기능 : 생성자
 * 인자값 : 없음
 * 반환값 : 없음
 */
AddMember::AddMember(UserTable* userTable) {
    this->userTable = userTable;
    registerUI = new RegisterUI();
    registerUI->startInterface();
}
/*
 * 함수 이름 : addNewMember
 * 기능 : 멤버 추가
 * 전달 인자 : string string string
 * 반환값 : 없음
 */
void AddMember::addNewMember(string userId, string password, string phoneNumber) {
    Member* newMember = new Member(userId, password, phoneNumber);
    userTable->addUser(newMember); 
}
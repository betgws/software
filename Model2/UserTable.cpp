#include "UserTable.h"
#include <iostream>

using namespace std;

/*
 * 함수 이름 : addUser
 * 기능 : User 저장
 * 전달 인자 : User*
 * 반환값 : 없음
 */
void UserTable::addUser(User* user) {
    userList.push_back(user);
}

/*
 * 함수 이름 : getAllUsers()
 * 기능 : 모든 유저 반환
 * 전달 인자 : 없음
 * 반환값 : 없음
 */
vector<User*> UserTable::getAllUsers() {
    return userList;
}
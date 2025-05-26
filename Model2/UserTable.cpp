#include "UserTable.h"
#include <iostream>

using namespace std;

/*
 * �Լ� �̸� : addUser
 * ��� : User ����
 * ���� ���� : User*
 * ��ȯ�� : ����
 */
void UserTable::addUser(User* user) {
    userList.push_back(user);
}

/*
 * �Լ� �̸� : getAllUsers()
 * ��� : ��� ���� ��ȯ
 * ���� ���� : ����
 * ��ȯ�� : ����
 */
vector<User*> UserTable::getAllUsers() {
    return userList;
}
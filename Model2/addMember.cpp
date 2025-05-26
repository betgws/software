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
 * ��� : ������
 * ���ڰ� : ����
 * ��ȯ�� : ����
 */
AddMember::AddMember(UserTable* userTable) {
    this->userTable = userTable;
    registerUI = new RegisterUI();
    registerUI->startInterface();
}
/*
 * �Լ� �̸� : addNewMember
 * ��� : ��� �߰�
 * ���� ���� : string string string
 * ��ȯ�� : ����
 */
void AddMember::addNewMember(string userId, string password, string phoneNumber) {
    Member* newMember = new Member(userId, password, phoneNumber);
    userTable->addUser(newMember); 
}
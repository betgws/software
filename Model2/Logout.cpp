/**
 * Project Untitled
 */


#include "Logout.h"
#include "User.h"
#include "UserTable.h"
using namespace std;


/*
 * �Լ� �̸� :Logout
 * ��� : Logout ������
 * ���� ���� : UserTable* 
 * ��ȯ�� : ����
 */
Logout::Logout(UserTable* userTable) {
    this->userTable = userTable;
    logoutUI = new LogoutUI();
    logoutUI->startInterface();
}

/*
 * �Լ� �̸� :logout
 * ��� : �α׾ƿ� 
 * ���� ���� : ����
 * ��ȯ�� : ����
 */
string Logout::logout() {
    int loginIndex = userTable->getLoginIndex();

    string id = userTable->getAllUsers()[loginIndex]->getUserId();

    userTable->setLoginIndex(-1);
    return id;

}
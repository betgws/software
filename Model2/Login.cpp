
#include "Login.h"
#include "LoginUI.h"
#include "User.h"
using namespace std;

/*
 * �Լ� �̸� : Login
 * ��� : Login ������
 * ���� ���� : userTable*
 * ��ȯ�� : ����
 */
Login::Login(UserTable* userTable) {	
	this->userTable = userTable;
	loginUI = new LoginUI();
	loginUI->startInterface();
}


/*
 * �Լ� �̸� : login
 * ��� : ���̵�� ��й�ȣ�� ��ġ�ϴ� �� Ȯ�� �� �α���
 * ���� ���� : string, string
 * ��ȯ�� : ����
 */
void Login::login(string userId, string password) {

    vector<User*> users = userTable->getAllUsers();
    for (int i = 0; i < users.size(); ++i) {
        if (users[i]->getUserId() == userId && users[i]->getPassword() == password) {
            userTable->setLoginIndex(i); 

            return;
        }
    }
	
}

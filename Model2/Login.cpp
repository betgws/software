
#include "Login.h"
#include "LoginUI.h"
#include "User.h"
using namespace std;

/*
 * 함수 이름 : Login
 * 기능 : Login 생성자
 * 전달 인자 : userTable*
 * 반환값 : 없음
 */
Login::Login(UserTable* userTable) {	
	this->userTable = userTable;
	loginUI = new LoginUI();
	loginUI->startInterface();
}


/*
 * 함수 이름 : login
 * 기능 : 아이디와 비밀번호가 일치하는 지 확인 후 로그인
 * 전달 인자 : string, string
 * 반환값 : 없음
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

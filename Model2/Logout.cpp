/**
 * Project Untitled
 */


#include "Logout.h"
#include "User.h"
#include "UserTable.h"
using namespace std;


/*
 * 함수 이름 :Logout
 * 기능 : Logout 생성자
 * 전달 인자 : UserTable* 
 * 반환값 : 없음
 */
Logout::Logout(UserTable* userTable) {
    this->userTable = userTable;
    logoutUI = new LogoutUI();
    logoutUI->startInterface();
}

/*
 * 함수 이름 :logout
 * 기능 : 로그아웃 
 * 전달 인자 : 없음
 * 반환값 : 없음
 */
string Logout::logout() {
    int loginIndex = userTable->getLoginIndex();

    string id = userTable->getAllUsers()[loginIndex]->getUserId();

    userTable->setLoginIndex(-1);
    return id;

}
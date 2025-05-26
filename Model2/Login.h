/**
 * Project Untitled
 */


#ifndef _LOGIN_H
#define _LOGIN_H

#include <string>

#include "UserTable.h"
using namespace std;

class LoginUI;

class Login {
public: 
    Login(UserTable* userTable);
    void login(string userId, string password);
    LoginUI* getLoginUI() { return loginUI; };
private:
	LoginUI* loginUI;
    UserTable* userTable;
    int loginCount = 0;
};

#endif //_LOGIN_H
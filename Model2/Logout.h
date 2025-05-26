/**
 * Project Untitled
 */


#ifndef _LOGOUT_H
#define _LOGOUT_H

#include "LogoutUI.h"
#include "UserTable.h"

class Logout {
public: 
    
    Logout(UserTable* userTable);
    LogoutUI* getLogoutUI() { return logoutUI; };
    string logout();

private:
    LogoutUI* logoutUI;
    UserTable* userTable;
};

#endif //_LOGOUT_H
/**
 * Project Untitled
 */


#ifndef _LOGINUI_H
#define _LOGINUI_H
#include <string>

#include "File.h"
#include "Login.h"


using namespace std;

class Login;


class LoginUI {
public: 
    
    LoginUI() {}
    void input(Login* login, File* file);
    void startInterface();
};

#endif //_LOGINUI_H
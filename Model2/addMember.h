/**
 * Project Untitled
 */


#ifndef _ADDMEMBER_H
#define _ADDMEMBER_H
#include <string>

class RegisterUI;
class UserTable;

using namespace std;

class AddMember {
public: 

    AddMember(UserTable* userTable);
    void addNewMember(string userId, string password, string phoneNumber);
    RegisterUI* getRegisterUI() { return registerUI; };


private:
    RegisterUI* registerUI;
    UserTable* userTable;
};


#endif //_ADDMEMBER_H
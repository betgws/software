/**
 * Project Untitled
 */

#include <string>
using namespace std;

#ifndef _USER_H
#define _USER_H

class User {
public: 
    User() {};
    User(string userId, string password) : userId(userId), password(password) {};
    string getUserId();
    string getPassword();
    virtual ~User() {}
private: 
    string userId;
    string password;
    

};

#endif //_USER_H
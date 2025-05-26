#pragma once
#include <vector>

#include "User.h"

// UserTable.h
class UserTable {
private:
    vector<User*> userList;
    int loginIndex = -1;

public:
    void addUser(User* user);
    vector<User*> getAllUsers();

    void setLoginIndex(int index) { loginIndex = index; }
    int getLoginIndex() const { return loginIndex; }

};
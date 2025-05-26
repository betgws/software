/**
 * Project Untitled
 */


#ifndef _ADMIN_H
#define _ADMIN_H

#include "User.h"
#include "Bike.h"


class Admin: public User {
public: 
    Admin(string userId, string password)
        : User(userId, password) {
    }
};

#endif //_ADMIN_H
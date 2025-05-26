/**
 * Project Untitled
 */


#ifndef _MEMBER_H
#define _MEMBER_H

#include "User.h"
#include <list>
#include <vector>

using namespace std;

class Member: public User {
public: 
 
   
    Member(string userId, string password, string phoneNumber) : User(userId, password), phoneNumber(phoneNumber) {
        this->phoneNumber = phoneNumber;
    };
    void addRentedList(string bikeId);
    vector<string>& getRentedBikeIds() { return rentedBikeIds; };

private: 
    string phoneNumber;
    vector<string> rentedBikeIds;
 
};

#endif //_MEMBER_H
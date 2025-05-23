/**
 * Project Untitled
 */


#ifndef _MEMBER_H
#define _MEMBER_H

#include "User.h"
#include <list>

using namespace std;

class Member: public User {
public: 
 
    
/**
 * @param userId
 * @param password
 * @param phoneNumber
 */
Member(string userId, string password, string phoneNumber);
    
/**
 * @param bikeId
 */
void addRentedList(int bikeId);
private: 
    string phoneNumber;
    list<int> rentedBikeIds;
};

#endif //_MEMBER_H
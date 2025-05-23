/**
 * Project Untitled
 */


#ifndef _REGISTERUI_H
#define _REGISTERUI_H

#include <string>
using namespace std;

class RegisterUI {
public: 
    
void startInterface();
    
/**
 * @param userId
 * @param password
 * @param phoneNumber
 */
void join(string userId, string password, string phoneNumber);
};

#endif //_REGISTERUI_H
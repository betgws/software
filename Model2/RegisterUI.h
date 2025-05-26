/**
 * Project Untitled
 */


#ifndef _REGISTERUI_H
#define _REGISTERUI_H

#include <string>
#include "File.h"
#include "AddMember.h"
using namespace std;

class RegisterUI {
public: 
    
void startInterface();
    

void join(AddMember* addMember, File* file);
};

#endif //_REGISTERUI_H
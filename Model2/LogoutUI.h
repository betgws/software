/**
 * Project Untitled
 */


#ifndef _LOGOUTUI_H
#define _LOGOUTUI_H

class Logout;
class File;

class LogoutUI {
public: 

    LogoutUI() {};
    void startInterface();
    void logout(Logout* logout, File* file);
};

#endif //_LOGOUTUI_H
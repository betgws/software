

#ifndef _BIKEUI_H
#define _BIKEUI_H
#include <string>


class AddBike;
class File;

using namespace std;
class RegisterBikeUI {
public: 
    
    void startinterface();
    void registerBike(AddBike* addBike, File* file);
};

#endif //_BIKEUI_H
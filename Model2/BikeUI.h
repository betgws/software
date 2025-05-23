/**
 * Project Untitled
 */


#ifndef _BIKEUI_H
#define _BIKEUI_H
#include <string>

using namespace std;
class BikeUI {
public: 
    
void startinterface();
    
/**
 * @param bikeId
 * @param bikeType
 */
void registerBikeRequest(int bikeId, string bikeType);
};

#endif //_BIKEUI_H
/**
 * Project Untitled
 */


#ifndef _ROOM_H
#define _ROOM_H

#include "VIP.h"
#include "Suite.h"
#include "Normal.h"


class Room: public VIP, public Suite, public Normal {
public: 
    
/**
 * @param int Number
 * @param int Occupied
 * @param string Type
 */
int RoomLeft(void int Number, void int Occupied, void string Type);
private: 
    Int Level;
    int Number;
    Department Dep;
    String Type;
};

#endif //_ROOM_H
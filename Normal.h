/**
 * Project Untitled
 */


#ifndef _NORMAL_H
#define _NORMAL_H

#include "Room.h"


class Normal: public Room {
public: 
    
/**
 * @param int P
 */
void setPrice(void int P);
    
int getPrice();
private: 
    Int Price;
};

#endif //_NORMAL_H
/**
 * Project Untitled
 */


#ifndef _SUITE_H
#define _SUITE_H

#include "Room.h"


class Suite: public Room {
public: 
    
/**
 * @param int P
 */
void setPrice(void int P);
    
int getPrice();
private: 
    Int Price;
};

#endif //_SUITE_H
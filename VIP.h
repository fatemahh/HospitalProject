/**
 * Project Untitled
 */


#ifndef _VIP_H
#define _VIP_H

#include "Room.h"


class VIP: public Room {
public: 
    
/**
 * @param int P
 */
void setPrice(void int P);
    
int getPrice();
private: 
    Int Price;
};

#endif //_VIP_H
/**
 * Project Untitled
 */


#ifndef _CREDIT_H
#define _CREDIT_H

#include "Paid.h"


class Credit: public Paid {
private: 
    int CreditNumber;
    int Cvv;
};

#endif //_CREDIT_H
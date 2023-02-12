/**
 * Project Untitled
 */


#ifndef _PAID_H
#define _PAID_H

#include "Credit.h"
#include "Cash.h"
#include "Wallet.h"
#include "Patient.h"


class Paid: public Credit, public Cash, public Wallet, public Patient {
public: 
    
double getPoints();
    
double getDiscout();
    
/**
 * @param double Points
 */
void addPoints(void double Points);
    
/**
 * @param double Discount
 */
void addDiscount(void double Discount);
private: 
    Double Points;
    Double Discount;
};

#endif //_PAID_H
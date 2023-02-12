/**
 * Project Untitled
 */


#ifndef _PATIENT_H
#define _PATIENT_H

#include "Paid.h"
#include "Insured.h"


class Patient: public Paid, public Insured {
public: 
    
/**
 * @param string N
 */
void setName(void string N);
    
/**
 * @param int A
 */
void setAge(void int A);
    
/**
 * @param string G
 */
void setGender(void string G);
    
/**
 * @param string Num
 */
void setNumber(void string Num);
    
/**
 * @param string Add
 */
void setAddress(void string Add);
    
string getName();
    
int getAge();
    
string getGender();
    
string getNumber();
    
string getAddress();
    
string getReservation();
private: 
    String Full Name;
    Integer Age;
    String Gender;
    String Number;
    String Address;
    Reservation Reservation;
};

#endif //_PATIENT_H
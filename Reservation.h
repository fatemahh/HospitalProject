/**
 * Project Untitled
 */


#ifndef _RESERVATION_H
#define _RESERVATION_H

class Reservation {
public: 
    
/**
 * @param string N
 */
void setName(void string N);
    
/**
 * @param string D
 */
void setDoctor(void string D);
    
/**
 * @param string R
 */
void setRoom(void string R);
    
string getName();
    
string getDoctor();
    
string getRoom();
    
/**
 * @param double PointsDiscount
 */
double CalculatePrice(void double PointsDiscount);
private: 
    Patient Patient;
    Doctor Doc;
    Room Room;
    Double Price;
};

#endif //_RESERVATION_H
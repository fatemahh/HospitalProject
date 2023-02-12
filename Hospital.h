/**
 * Project Untitled
 */


#ifndef _HOSPITAL_H
#define _HOSPITAL_H

class Hospital {
public: 
    
/**
 * @param string Name
 */
void setName(void string Name);
    
/**
 * @param string Phar
 */
void setPharmacy(void string Phar);
    
string getName();
    
string getPharmacy();
    
/**
 * @param int NoPatients
 * @param int Rooms
 */
int RoomsAvailable(void int NoPatients, void int Rooms);
private: 
    String Name;
    String Department Dep;
    Int Room Rooms;
    Pharmacy Pharm;
};

#endif //_HOSPITAL_H
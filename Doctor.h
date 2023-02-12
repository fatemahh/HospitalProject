/**
 * Project Untitled
 */


#ifndef _DOCTOR_H
#define _DOCTOR_H

class Doctor {
public: 
    
string getName();
    
string getDepartment();
    
/**
 * @param int WorkingDays
 * @param float Rate
 */
float CalculateSalary(void int WorkingDays, void float Rate);
private: 
    String Name;
    Department Dep;
};

#endif //_DOCTOR_H
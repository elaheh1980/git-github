#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include "person.h"


using namespace std;

class employee : person
{
    int employee_ID;    //Attribute
    public :
    employee();    //Constructor
    void get_employee_info();
    void print_employee();
    set_employeeID();

};
#endif // EMPLOYEE_H


#include "employee.h"
#include <iostream>
using namespace std;

employee::employee()  // Constructor definition outside the class
    {
     employee_ID = 0;
    }

void employee :: get_employee_info()
    {
        get_person_Info();
        cout << "Enter Employee ID :"<<endl;
        cin >> employee_ID;
    }

int employee :: set_employeeID()
    {
      return employee_ID ;
    }


void employee :: print_employee()
    {
     print_person_Info();
     cout << "Emloyee ID: "<<employee_ID<<endl;
    }









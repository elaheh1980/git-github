#include "customer.h"
#include "iostream"
using namespace std ;

customer::customer()
    {
      m_Counter = 0;
    }

 void customer :: get_customer_info()
    {
     get_person_Info();
     cout << "Enter customer ID :"<<endl;
     cin >> m_Counter ;

    }

void customer :: print_customer()
    {
     print_person_Info();
     cout << "customer ID: "<<m_Counter<<endl;
    }

int customer :: get_customerID()
    {
        return m_Counter;
    }
/*bool customer :: checkID(int idsearch)
    {
        if (m_Counter==idsearch)
            return true;
            return false;
    }*/




#include <iostream>
#include "employee.h"
#include "customer.h"
#include "person.h"
#include <list>
using namespace std;

list <employee> lp;
list <customer> g2;

customer newCustomer() {
 customer temp;
 temp.get_customer_info();
 return temp;
}

employee newEmployee(){
    employee temp;
    temp.get_employee_info();
    return temp;
}

//Add a new employee to the list
void Add_newEmployee_to_list()   //Free function
    {
     lp.push_back(newEmployee());
    }

    // print/view the list of customers
void viewAll_employees_list() //free function
    {
    cout << " info of employess in the list g2: "<<endl;
    list <employee> :: iterator it;
    for ( auto it=lp.begin(); it != lp.end();it++ )
    {
      (*it).print_employee();

    }
    }
//Add a new customer to the list
void Add_newCustomer_to_list()  //Free function
    {
      g2.push_back(newCustomer());

    }

// print/view the list of customers
 void viewAll_customer_list() //free function
    {
    cout << " List of customers in the list g2: "<<endl;
    list <customer> :: iterator it;
    for ( auto it=g2.begin(); it != g2.end();it++ )
    {
      (*it).print_customer();

    }
    }

// get the ID from the user and go through all objects of the class and fine the id
// it sends the idsearch to all classes of the list and check if m_Counter== idsearch
bool search_customerID_list(list <customer> g2)
   {
    int idsearch;
    bool IDfound= false;
    cout << "enter customer ID:"<<endl;
    cin >>idsearch;
    list <customer> :: iterator it;
    for (it=g2.begin(); it != g2.end();it++ )
        {
          if (it->m_Counter==idsearch)
            {
             IDfound= true;
            }
        }
          if(IDfound== true)
        { cout <<IDfound<<endl<< " *customer found* "<<endl;;}
        else
         {
          cout <<IDfound<<endl;
          cout << "customer not  found"<<endl;
         }
    }

    //second alternative ; to get the id from each objects of class and compare it with idsearc
    // user enter the idserach , it pointer call/get get_customerID()for each cell/class of list and compare it with idsearch
void search_list_customerID_by_getID(list <customer> g2)
{
        int idsearch;
    bool IDfound= false;
    cout << "enter customer ID:"<<endl;
    cin >>idsearch;
    list <customer> :: iterator it;
    for (it=g2.begin(); it != g2.end();it++ )
        {
             if (it->get_customerID() ==idsearch)
            {
            IDfound= true;
            }
        }
    if(IDfound== true)
        { cout <<IDfound<<endl<< " ********customer found *****"<<endl;;}
    else
    {
        cout <<IDfound<<endl;
        cout << "customer not  found"<<endl;
    }


}

// Add new employee to array
void newEmployeeArray(employee emp[3])
    {
    for(int i=0;i<3;i++)
        emp[i]= newEmployee();
    }
    //Add new customer to Array
void newCustomerArray(customer carray[3])
    {
     for (int i = 0; i < 3; i++)
      carray[i] = newCustomer();
    }
    //view All employees
void viewAll_employeesArray(employee emp[3])
    {
        cout << " List of Employees in Array  : "<<endl;
     for (int i=0; i<3; i++)
     emp[i].print_employee();
    }
  //  view All customers
void   viewAll_customerArray(customer carray[3])
    {
     cout << " List of customers in Array  : "<<endl;
     for (int i=0; i<3; i++)
     carray[i].print_customer();
    }

void customer_array_search_id(customer carray[3])
{
    int idsearch;
    bool IDfound= false;
    cout << "enter customer ID:"<<endl;
    cin >>idsearch;

        for (int i=0; i<3; i++)
        {
        if(carray[i].m_Counter==idsearch)
        {
             IDfound= true;
        }
        }
        if(IDfound== true)
        { cout <<IDfound<<endl<< " ********customer found *****"<<endl;;}
        else
         {
          cout <<IDfound<<endl;
          cout << "customer not  found"<<endl;
         }


}

void customer_array_search_id_by_getID(customer carray[3])
    {
    int idsearch;
    bool IDfound= false;
    cout << "enter customer ID:"<<endl;
    cin >>idsearch;
    for (int i=0; i<3; i++)
        {
         if (carray[i].get_customerID() ==idsearch)
            {
            IDfound= true;
            }
        }
    if(IDfound== true)
        { cout <<IDfound<<endl<< " ********customer found *****"<<endl;;}
    else
    {
        cout <<IDfound<<endl;
        cout << "customer not  found"<<endl;
    }
    }

int main()
{
     customer carray[3];
     employee emp[3];
     int choice;
    do{

      string menu_string="---Select ---\n";
      menu_string += "1: Add new employee to the list\n";
      menu_string += "2: Add new customer to the list\n";
      menu_string += "3: View all employee in the list\n";
      menu_string += "4: View all Customer in the list\n";
      menu_string += "5: Search customer list by sending ID to classes\n";
      menu_string += "6: Search customer list by getID\n";
      menu_string += "7: Add new employee to an Array\n";
      menu_string += "8: Add new customer to an Array\n";
      menu_string += "9: View all employee in an Array\n";
      menu_string += "10: View all Customer in an Array\n";
      menu_string += "11: Search Arrays to find customerID ";
      menu_string += "12: Search customer by getID methode\n";
      menu_string += "13: Exit\n";
      cout<<menu_string;
      cout<<"Enter your choice(1-12):";
      cin>>choice;
      switch (choice)
        {
            case 1: Add_newEmployee_to_list(); break;
            case 2: Add_newCustomer_to_list();break;
            case 3: viewAll_employees_list();break;
            case 4: viewAll_customer_list();break;
            case 5: search_customerID_list(g2);break;
            case 6: search_list_customerID_by_getID(g2);break;
            case 7: newEmployeeArray(emp); break;
            case 8: newCustomerArray(carray);break;
            case 9: viewAll_employeesArray(emp);break;
            case 10: viewAll_customerArray(carray);break;
            case 11: customer_array_search_id(carray);break;
            case 12: customer_array_search_id_by_getID(carray);break;
            case 13: exit(0);
            }
        }
            while((choice=cin.get())!='12');



    return 0;
}



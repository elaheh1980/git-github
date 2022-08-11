#include "person.h"
#include "iostream"
using namespace std ;

person::person()
{
string name = "not set";
int age= 0;
}
void person :: get_person_Info()
{
cout << "enter name :";
cin >> name;
cout << "enter age ";
cin >> age;
}

void person:: print_person_Info()
{

cout << "\t\nname:" << name<<";"<< "age:" << age<<";";

}




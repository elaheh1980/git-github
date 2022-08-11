#ifndef PERSON_H
#define PERSON_H
#include<string>
#include "iostream"
using namespace std ;

class person
{
    protected:
     string name = "";
     int age;


    public:
        person();
       void get_person_Info();
       void set_person_Info();
       void print_person_Info();




};

#endif // PERSON_H

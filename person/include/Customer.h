#ifndef CUSTOMER_H
#define CUSTOMER_H
#include "person.h"
using namespace std ;


class customer : person
    {
        public:
        int m_Counter;
        public:
        customer();
        void get_customer_info();
        void print_customer();
        int get_customerID();
        bool checkID();

    };

#endif // CUSTOMER_H

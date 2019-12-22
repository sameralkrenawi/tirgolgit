#pragma once
#include "Employee .h"
#include <iostream>
#include <stdexcept>

using namespace std;

class Employee:public Person {
private:
    float salary=0;
public:
        Employee();
        Employee(string FName,string LName,string Identity,int Y);
        Employee(const Worker& other);
        ~Employee();


};

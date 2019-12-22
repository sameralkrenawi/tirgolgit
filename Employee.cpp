#include "Employee.h"
#include <iostream>
#include <string>

Employee::Employee(){
    salary=0;
}

Employee::Employee(const Employee& other):Person(other)// copy of the person (heritance)
{salary=other.salary;// just copy of the only variable of the class}

Employee ::Employee (string pname, long id, int page,float salary):Person(pname,id,page)
    {
        this.salary=salary;
    }

Employee::~Employee() {}

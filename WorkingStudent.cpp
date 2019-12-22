#include "WorkingStudent.h"
#include <iostream>
#include <string>

WorkingStudent::WorkingStudent(){
    salary=0;
}

Employee::Employee(const Employee& other):Person(other)// copy of the person (heritance)
{years=other.years;// just copy of the only variable of the class}

Employee ::Employee (string pname, long id, int page,float salary):Person(pname,id,page)
    {
        this.salary=salary;
    }

Employee::~Employee() {}

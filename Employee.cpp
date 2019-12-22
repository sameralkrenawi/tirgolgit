#include "Employee.h"
#include <iostream>
#include <string>

Employee::Employee(){}

Employee::Employee(const Employee& other):Person(other)// copy of the person (heritance)
{// Fonction copy  numDef = other.numDef;
    years=other.years;// just copy of the only variable of the class
}

 Employee ::Employee (string pname, long id, int page,float salary):Person(pname,id,page)
    {
        this.salary=salary;
    }

Worker::~Worker() {
}

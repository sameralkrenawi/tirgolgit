#include "WorkingStudent.h"
#include <iostream>
#include <string>

WorkingStudent::WorkingStudent(){
    same_institue=true;
}

WorkingStudent::WorkingStudent(const WorkingStudent& other):Student(other):Employee(other)// copy of the person (heritance)
}

Employee ::Employee (string pname, long id, int page,float salary):Person(pname,id,page)
    {
        this.salary=salary;
    }

Employee::~Employee() {}

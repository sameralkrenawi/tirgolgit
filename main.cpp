
#include "Person.h"
#include "Employee.h"
#include "Student.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int size_student,size_Employee,size_Working_student,size;
    Person ** P=NULL;
    cout<<"enter number of sudent:"<<endl;
    cin>>size_student;
    cout<<"enter number of employee:"<<endl;
    cin>>size_Employee;
    size=size_student+size_Employee;
    P=new Person*[size];
    for (int i=0;i<size_student;i++){
        cout<<"entre name,id,age"<<endl
        cin>>name,id,age;
        P[i]=new Student[name,id,age];
    }
    for (int i=0;i<size_Employee;i++){
        cout<<"entre name,id,age,salary"<<endl
        cin>>name,id,age,salary
        P[i]=new Employee[name,id,age,salary];
    }  
    return 0;   
};
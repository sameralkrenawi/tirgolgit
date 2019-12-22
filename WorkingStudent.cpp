#include "WorkingStudent.h"
#include <iostream>
#include <string>

WorkingStudent::WorkingStudent(){
    same_institue=true;
}

WorkingStudent::WorkingStudent(const WorkingStudent& other):Student(other):Employee(other)// copy of the person (heritance)
}

WorkingStudent:WorkingStudent(bool same_institue):Student(int average, string institute):Employee(string FName,string LName,string Identity,int Y){

}

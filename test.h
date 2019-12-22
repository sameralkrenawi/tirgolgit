#pragma once
#include "Person.h"
#include <iostream>
#include <stdexcept>

using namespace std;

template<class T>
class Person {
private:
    string name;
    long id;
    int age;
    //default constructor

    Person::Person(string pname, long id, int page)
    {
        this.id = id;
        if (pname.length < 10)
            name = pname;
        else {
            throw std::invalid_argument("Invalid length of name");
        }
        if (age >= 0 && age < 120) {
            age = page;
        }
        else {
            throw std::invalid_argument("Invalid Age");
        }
    }
};

class Student :Person {

private:
	int average;
	string institute;

	Student::Student(int average, string institute)
	{
		this.average = average;
		if (institute.length < 10)
			this.institute = institute;
		else {
			throw std::invalid_argument("Invalid length of institute");
		}


	}

};
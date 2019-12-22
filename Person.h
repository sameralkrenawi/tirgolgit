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
            this.name = pname;
        else {
            throw std::invalid_argument("Invalid length of name");
        }
        if (age >= 0 && age < 120) {
            this.age = page;
        }
        else {
            throw std::invalid_argument("Invalid Age");
        }
    }
};

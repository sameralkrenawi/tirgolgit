#pragma once
#include "Person.h"
#include <iostream>
#include <stdexcept>

using namespace std;


class Person {
private:
    string name;
    long id;
    int age;
    //default constructor
    Person::Person()
    {
	     this.name = Null;
	     this.age = 0;
       this.id=Null;
    }
    Person::Person(Person p){
      this.name=p.name;
      this.id=p.id;
      this.age=p.age;
    }
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

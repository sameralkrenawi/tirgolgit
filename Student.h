
#include "Person.h"
#include <iostream>
#include <stdexcept>

using namespace std;


class Student :Person {

private:
	int average;
	string institute;

	Student::Student()
	{
		this.average = 0;
		this.institute = NULL;
	}

	Student::Student(Student obj)
	{
		this.average = obj.average;
		this.institute = obj.institute;
	}

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
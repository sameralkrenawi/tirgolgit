
#include "Person.h"
#include <iostream>
#include <stdexcept>

using namespace std;


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
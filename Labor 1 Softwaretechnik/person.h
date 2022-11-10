#pragma once
#include <string>
#include "defs.h"
using namespace std;

//definition
class Person
{
private :
	string _name;
	string _surname;
	Date _dob;

public : 
	void setName(string);
	string name();
	void setSurname(string);
	string surname();
	void setDob(unsigned int, MONTH, int);
	Date dob();
};

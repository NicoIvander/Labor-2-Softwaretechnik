#pragma once
#include <string>
#include "person.h"
#include "defs.h"
using namespace std;

class Customer : public Person
{
private :
	Address _address;
	unsigned int _id;

public:
	void setAddress(string, unsigned int, string, string, string);
	Address address();
	void setID(unsigned int);
	unsigned int id();
};
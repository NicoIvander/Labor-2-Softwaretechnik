// global includes
#include <iostream>
#include <string>
using namespace std;
// local include
#include "person.h"
#include "defs.h"

//implementation
void Person::setName(string name)
{
	_name = name;
}
string Person::name()
{
	return _name;
}
void Person::setSurname(string surname)
{
	_surname = surname;
}
string Person::surname()
{
	return _surname;
}
void Person::setDob(unsigned int dd, MONTH mm, int yyyy)
{

	if ((mm == APR || mm == JUN || mm == SEP || mm == NOV) && (dd >= 31))
	{
		throw exception(ERROR);
	}
	else if ((mm == JAN || mm == MAR || mm == MAY || mm == JUL || mm == AUG || mm == OCT || mm == DEC) && (dd > 31))
	{
		throw exception(ERROR);
	}
	else if ((mm == FEB) && dd > 29)
	{
		throw exception(ERROR);
	}
	else
	{
		_dob.day = dd;
		_dob.month = mm;
		_dob.year = yyyy;
	}
}

Date Person::dob()
{
	Date D;
	D.day = _dob.day;
	D.year = _dob.year;
	D.month = _dob.month;
	return D;
}

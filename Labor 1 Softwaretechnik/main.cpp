// global includes
#include <iostream>
#include <string>

// local include
#include "person.h"
#include "defs.h"
#include "customer.h"
using namespace std;

// prototypes
void print(Customer);

// main function, no need to return anything
void main()
{
	//local variables
	Customer aPerson;
	int error;

	// set person's details
	aPerson.setName("Joe");
	aPerson.setSurname("Bloggs");
	aPerson.setAddress("Hauptstrasse", 21, "45220", "Klein Bollersen", "Deutschland");
	// check if day matches month
	
	try
	{
		aPerson.setDob(28, FEB, 1999);

		print(aPerson);
		cout << OK;
	}
	catch(exception ex)
	{
		cout << ex.what() << endl;
	}
}

void print(Customer aPerson)
{
	//prints out all the person's details
	cout << "Name : " << aPerson.name();
	cout << " \n" << aPerson.surname();
	cout << " DoB: " << aPerson.dob().day;
	cout << "." << aPerson.dob().month;
	cout << "." << aPerson.dob().year << endl;
	cout << "Address : " << aPerson.address().street;
	cout << " " << aPerson.address().number;
	cout << ",  " << aPerson.address().postcode;
	cout << ", " << aPerson.address().city;
	cout << ", " << aPerson.address().country;
}
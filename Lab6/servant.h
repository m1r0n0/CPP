#pragma once
#include "staff.h"

class servant :
	public staff
{
protected:
	string name_;
	int age_;
	int experience_;
public:
	using staff::staff;  // inherit base class constructor

	servant(string, int, int);
	servant(servant&);

	//Properties
	__declspec(property (put = set_name, get = get_name)) string Name;
	__declspec(property (put = set_age, get = get_age)) int Age;
	__declspec(property (put = set_experience, get = get_experience)) int Experience;

	//Accessors
	string get_name();
	void set_name(string name);
	int get_age();
	void set_age(int age);
	int get_experience();
	void set_experience(int experience);

	//Functions
	void print();
};

#pragma once
#include <string>

#include "TObject.h"

class servant : public TObject
{
protected:
	std::string name_;
	int age_;
	int experience_;
	servant* next;
public:

	servant(std::string, int, int);
	servant(servant&);

	//Properties
	__declspec(property (put = set_name, get = get_name)) std::string Name;
	__declspec(property (put = set_age, get = get_age)) int Age;
	__declspec(property (put = set_experience, get = get_experience)) int Experience;

	//Accessors
	std::string get_name();
	void set_name(std::string name);
	int get_age();
	void set_age(int age);
	int get_experience();
	void set_experience(int experience);

	//Functions
	void print();
	void add(servant* s);
	static bool check_is_older(servant s, int n);
};

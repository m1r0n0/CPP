#include "department.h"

#include <iostream>

department::department(std::string name_)
{
	name = name_;
};
department::department(department& d) : department(d.name) {};
department::department() {};
department::~department(){};

std::string department::get_name()
{
	return name;
};
void department::set_name(char* NAME)
{
	name = NAME;
};
void department::add(department* d)
{
	department* el = this; while (el->next) {
		el = el->next;
	}
	el->next = d;
};

void department::print()
{
}

void department::iterate(bool f(servant s, int), int a)
{
	std::cout << "boo";
}
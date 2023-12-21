
#include "workstation.h"

#include <iostream>

void workstation::iterate(bool (f)(servant e, int), int a) {
	employee* e = employee_;
	do {
		if (f(*e, a)) {
			e->print();
		} e = e->next;
	} while (e);
}

workstation::workstation(std::string n, employee* employee)
{
	name = n;
	employee_ = employee;
}

void workstation::print() {
	std::cout << "Workstation" << std::endl;
}
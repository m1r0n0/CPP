#include "employee.h"

#include <iostream>

void employee::print()
{
	std::cout << "Employee: Name: " << this->Name << "; Age: " << this->Age << "; Experience: " << this->Experience << ";\n";
}

void employee::add(employee* e) {
	employee* el = this;
	while (el->next) {
		el = el->next;
	}
	el->next = e;
}

#include "engineer.h"

#include <iostream>

void engineer::print()
{
	std::cout << "Engineer: Name: " << this->Name << "; Age: " << this->Age << "; Experience: " << this->Experience << ";\n";
}

void engineer::add(engineer* e) {
	engineer* el = this;
	while (el->next) {
		el = el->next;
	}
	el->next = e;
}

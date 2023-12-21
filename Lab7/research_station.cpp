#include "research_station.h"

#include <iostream>

#include "engineer.h"

void research_station::iterate(bool (f)(servant e, int), int a) {
	engineer* e = engineer_;
	do {
		if (f(*e, a)) {
			e->print();
		} e = e->next;
	} while (e);
}

void research_station::print() {
	std::cout << "Workstation" << std::endl;
}

research_station::research_station(std::string name_, engineer* engineer)
{
	name = name_;
	engineer_ = engineer;
}
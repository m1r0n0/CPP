#include "employee.h"

#include <iostream>

void employee::print()
{
	std::cout << "Employee: Name: " << this->Name << "; Age: " << this->Age << "; Experience: " << this->Experience << ";\n";
}

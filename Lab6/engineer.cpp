#include "engineer.h"

#include <iostream>

void engineer::print()
{
	std::cout << "Engineer: Name: " << this->Name << "; Age: " << this->Age << "; Experience: " << this->Experience << ";\n";
}

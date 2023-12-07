#include <iostream>

#include "employee.h"
#include "engineer.h"
#include "servant.h"
#include "staff.h"

using namespace std;

staff* s_ = new staff();
staff* staff::begin_ = s_;

int main()
{
	servant serv("jack", 23, 3);
	employee empl ("rob", 25, 6);
	engineer engin("chris", 30, 10);

	serv.add();
	empl.add();
	engin.add();

	staff::show();
}

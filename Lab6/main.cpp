#include <iostream>

#include "employee.h"
#include "engineer.h"
#include "servant.h"
#include "staff.h"

using namespace std;

int main()
{
	auto s = new engineer("bob", 20, 2);
	
	cout << s->Name << s->Age << s->Experience;
}

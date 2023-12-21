#include <iostream>

#include "company.h"
#include "employee.h"
#include "engineer.h"
#include "research_station.h"
#include "servant.h"
#include "workstation.h"

using namespace std;

int main()
{
	employee empl1 ("rob", 25, 6);
	employee empl2 ("rob1", 26, 7);
	employee empl3 ("rob2", 56, 8);

	empl1.add(&empl2);
	empl2.add(&empl3);

	engineer engin1("chris", 30, 10);
	engineer engin2("chris1", 35, 15);
	engineer engin3("chris2", 300, 18);

	engin1.add(&engin2);
	engin2.add(&engin3);

	workstation workstation_("Workstation1", &empl1);
	research_station research_station_("Research1", &engin1);

	workstation_.add(&research_station_);

	company company_("company", &workstation_);
	company_.iterate(servant::check_is_older, 30);

}

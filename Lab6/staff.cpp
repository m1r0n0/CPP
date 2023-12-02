#include "staff.h"

//Accessors
string staff::get_name()
{
	return name_;
}

void staff::set_name(const string name)
{
	name_ = name;
}

int staff::get_age()
{
	return age_;
}

void staff::set_age(const int age)
{
	age_= age;
}

int staff::get_experience()
{
	return experience_;
}

void staff::set_experience(const int experience)
{
	experience_ = experience;
}


//Constructors
staff::staff() = default;;

staff::staff(string name = "Default_name", int age = 18, int experience = 0)
{
	name_ = name;
	age_ = age;
	experience_ = experience;
};
staff::staff(staff& s) : staff(s.Name, s.Age, s.Experience) {}

//Destructor
staff::~staff() = default;

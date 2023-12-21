#include "servant.h"

#include <iostream>

//Accessors
std::string servant::get_name()
{
	return name_;
}

void servant::set_name(const std::string name)
{
	name_ = name;
}

int servant::get_age()
{
	return age_;
}

void servant::set_age(const int age)
{
	age_ = age;
}

int servant::get_experience()
{
	return experience_;
}

void servant::set_experience(const int experience)
{
	experience_ = experience;
}

//Constructors
servant::servant(std::string name = "Default_name", int age = 18, int experience = 0)
{
	name_ = name;
	age_ = age;
	experience_ = experience;
};
servant::servant(servant& s) : servant(s.Name, s.Age, s.Experience) {}

void servant::print()
{
	std::cout << "Servant: Name: " << this->Name << "; Age: " << this->Age << "; Experience: " << this->Experience << ";\n";
}

void servant::add(servant* s) {
	servant* el = this;
	while (el->next) {
		el = el->next;
	}
	el->next = s;
}

bool servant::check_is_older(servant s, int n) {
	if (s.Age >= n) {
		return true;
	}
	return false;
}
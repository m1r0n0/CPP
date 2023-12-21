#pragma once
#include "department.h"
#include "employee.h"

class workstation :
    public department
{
protected:
	employee* employee_;
public:
	using department::department;
	workstation();
	workstation(std::string name, employee* employee);
	~workstation() = default;

	void print();
	void iterate(bool (f)(servant s, int), int a) override;
};


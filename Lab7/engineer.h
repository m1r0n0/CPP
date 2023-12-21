#pragma once
#include "employee.h"

class engineer :
	public employee
{
public:
	engineer* next;

	using employee::employee;
	virtual void print();
	void add(engineer* e);
};

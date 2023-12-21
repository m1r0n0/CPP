#pragma once
#include "servant.h"

class employee :
	public servant
{
public:
	using servant::servant;
	~employee(){}

	employee* next;

	virtual void print();
	void add(employee*);
};

#pragma once
#include "department.h"
#include "engineer.h"

class research_station :
    public department
{
protected:
	engineer* engineer_;
public:
	using department::department;
	research_station(std::string, engineer*);
	~research_station() = default;

	void print();
	void iterate(bool (f)(servant e, int), int a) override;
};


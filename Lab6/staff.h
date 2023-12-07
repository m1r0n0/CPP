#pragma once
#ifndef STAFF_H
#define STAFF_H
#include <string>
using namespace std;

class staff
{
protected:
	staff* next_;
	static staff* begin_;

public:
	//Constructors
	staff();
	staff(const staff&);

	//Destructor
	virtual ~staff();

	//Functions
	static void show(); // Перегляд списку
	void add();
	virtual void print();
};
#endif

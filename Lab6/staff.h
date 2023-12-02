#pragma once
#include <string>
using namespace std;

class staff
{
protected:
	string name_;
	int age_;
	int experience_;

	static staff* begin; // покажчик початку списку

public:
	//Properties
	__declspec(property (put = set_name, get = get_name)) string Name;
	__declspec(property (put = set_age, get = get_age)) int Age;
	__declspec(property (put = set_experience, get = get_experience)) int Experience;

	//Accessors
	string get_name();
	void set_name(string name);
	int get_age();
	void set_age(int age);
	int get_experience();
	void set_experience(int experience);

	//Constructors
	staff();
	staff(string, int, int);
	staff(staff&);

	//Destructor
	~staff();

	//Functions
	static void show(); // Перегляд списку
	void add(staff* s);
};

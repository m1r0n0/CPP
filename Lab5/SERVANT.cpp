#include <iostream>
#include "SERVANT.h"

using namespace std;

    //Properties
    PROPERTY<char*> Name;
    PROPERTY<int> Age;
    PROPERTY<int> Experience;

    //Constructors
    SERVANT::SERVANT()
    {
        cout << "Empty constructor called " << endl;
    };
	SERVANT::SERVANT(char* name, int age, int experience) {
        Name = name;
        Age = age;
        Experience = experience;
        cout << "Constructor called by object " << Name() << endl;
    };
    SERVANT::SERVANT(SERVANT& s) {
        Name = s.Name();
        Age = s.Age();
        Experience = s.Experience();
        cout << "Constructor called by object " << Name() << endl;
    };
    SERVANT::~SERVANT() {};

    //Functions
    void SERVANT::skip_years()
    {
        int years_amount;

        cout << "Enter amount of years to skip: ";
        cin >> years_amount;

        this->Age = this->Age() + years_amount;
        this->Experience = this->Experience() + years_amount;

        cout << "Years Passed!\n\n";
    }

    SERVANT* SERVANT::create_new_servant() {
        char* name = new char[100];
        int age;
        int experience;

        cout << "Enter servant's data: \n";
        cout << "Name:";
        cin >> name;
        cout << "Age:";
        cin >> age;
        cout << "Experience:";
        cin >> experience;
        cout << endl << endl;

        return new SERVANT(name, age, experience);
    }

    SERVANT* SERVANT::make_one_year_younger(SERVANT & s) {
        SERVANT* temp_servant = new SERVANT(s);
        temp_servant->Age = s.Age() - 1;
        cout << "Made servant younger!" << endl << endl;

        return temp_servant;
    }

    void SERVANT::print_servant(SERVANT* s) {
        cout << "Servant: \nName: " << s->Name() << ",\nAge: " << s->Age() << ",\nExperience: " << s->Experience() << ";\n\n";
    }
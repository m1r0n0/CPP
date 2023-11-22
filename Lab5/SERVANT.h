#include <iostream>
#include "PROPERTY.cpp"

class SERVANT {
public:
    //Properties
    PROPERTY<char*> Name;
    PROPERTY<int> Age;
    PROPERTY<int> Experience;

    //Constructors
    SERVANT();
    SERVANT(char* name, int age, int experience);
    SERVANT(SERVANT& s);

    //Destructor
    ~SERVANT();

    //Functions
    void skip_years();

    static SERVANT* create_new_servant();

    static void print_servant(SERVANT* s);
};

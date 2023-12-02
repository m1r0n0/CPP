#include <iostream>
#include "PROPERTY.cpp"

class SERVANT {
public:
    //Properties
    char* Name;
    PROPERTY<int> Age;
    PROPERTY<int> Experience;

    //Constructors
    SERVANT();
    SERVANT(char*, int, int);
    SERVANT(SERVANT&);

    //Destructor
    ~SERVANT();

    //Functions
    void skip_years();

    static SERVANT* make_one_year_younger(SERVANT &);

    static SERVANT* create_new_servant();

    static void print_servant(SERVANT*);
};

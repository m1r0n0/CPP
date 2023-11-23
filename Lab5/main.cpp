#include <iostream>
#include <vector>
#include <string>
#include <string.h>
#include "SERVANT.h"

using namespace std;

int main()
{
    //Вказівник на екземпляр класу
    SERVANT* s = new SERVANT();

    // Вказівники на компоненти-функції
    SERVANT* (*create)() = &SERVANT::create_new_servant;
    void (*print)(SERVANT*) = &SERVANT::print_servant;
    void (SERVANT :: * pass_years)() = &SERVANT::skip_years;

    //Servant array in static memory
    cout << "Static array ---------------------" << endl;
    SERVANT department[2];
    char name[4];
    strcpy(name, "Bob");
    department[0] = *(new SERVANT(name, 33, 12));

    char name1[4];
    strcpy(name1, "Qwe");
    department[1] = *(new SERVANT(name1, 28, 6));

    (*print)(&department[0]);
    (*print)(&department[1]);

    //Servant array in dynamic memory
    cout << "Dynamic array ---------------------" << endl;
    SERVANT* dynamic_department = new SERVANT[2]{
    department[0],
    department[1]
    };

    dynamic_department[0] = *(SERVANT::make_one_year_younger(dynamic_department[0]));
    dynamic_department[1] = *(SERVANT::make_one_year_younger(dynamic_department[1]));
    (*print)(&dynamic_department[0]);
    (*print)(&dynamic_department[1]);

    //Виклики функцій через вказівники
    cout << "Solo Item ---------------------" << endl;
    s = (*create)();
    (*print)(s);
    (s->*pass_years)();

    s = SERVANT::make_one_year_younger(*s);
    (*print)(s);



    //Виклик деструктора, так як об'єкт створювався через оператор new
    delete s;
    delete[] department;
    delete[] dynamic_department;

    return 0;
}
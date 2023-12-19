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
    SERVANT* department[3];
    department[0] = (new SERVANT((char*)"Bob", 33, 12));
    department[1] = (new SERVANT((char*)"Qwe", 28, 6));
    department[2] = (new SERVANT(*department[0]));


    (*print)(department[0]);
    (*print)(department[1]);
    (*print)(department[2]);


    //Servant array in dynamic memory
    cout << "Dynamic array ---------------------" << endl;
    SERVANT* dynamic_department = new SERVANT[2];
    dynamic_department[0] = *department[0];
    dynamic_department[1] = *department[1];

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


    //Виклики деструктора
    delete s;
    delete department[0];
    delete department[1];
    delete department[2];
    delete[] dynamic_department;

    return 0;
}
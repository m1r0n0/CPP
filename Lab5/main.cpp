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

    //Виклики функцій через вказівники
    s = (*create)();
    (*print)(s);
    (s->*pass_years)();
    (*print)(s);

    //Виклик деструктора, так як об'єкт створювався через оператор new
    delete s;

    return 0;
}
#include "staff.h"

#include <iostream>

//Constructors
staff::staff() = default;

staff::staff(const staff&) {}

//Destructor
staff::~staff() = default;

//Functions
void staff::add() {
    staff* s = begin_;
    while (s->next_) {
        s = s->next_;
    }
    s->next_ = this;
}

void staff::show() {
    staff* s = begin_;
    do {
        s->print();
        s = s->next_;
    } while (s);
}

void staff::print()
{
}




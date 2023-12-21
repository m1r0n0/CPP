#pragma once
#include "department.h"
class company :
    public department
{
public:
    using department::department;
    department* department_;

    company();
    company(std::string n, department* d);
    ~company() override;
    void print();
    void iterate(bool (f)(servant m, int), int a) override;
};


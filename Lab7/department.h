#pragma once
#include "servant.h"
#include "TObject.h"
class department :
    public TObject
{
protected:
	std::string name;
public:
    department* next;
    department(std::string);
    department(department&);
    department();
    virtual ~department();

	std::string get_name();
    void set_name(char* NAME);

    void add(department* s);
    void show();
    void print();
    virtual void iterate(bool (f)(servant w, int), int a) = 0;
};


#include "company.h"
company::company(std::string n, department* d)  {
	name = n;
	department_ = d;
}
void company::print() {}
void company::iterate(bool (f)(servant m, int), int a) {
	department* u = department_;
	do {
		u->iterate(f, a);
		u = u->next;
	} while (u);
}
company::~company() = default;

#include <iostream>
#include "bike.h"
#include "car.h"
#include "catamaran.h"
#include "ferry.h"
#include "seaplane.h"
#include "counter.h"

using namespace std;
using namespace OOP;

int main()
{
    counter c;

    vehicle* v[] = {new bike, new car, new catamaran(30), new ferry(10, 5, 3),new seaplane(15)};
    size_t sz = sizeof v/sizeof v[0];
    for (unsigned i = 0; i < sz; ++i)
        c.add(v[i]);
    std::cout << "ukupno " << c.total() << " putnika" << std::endl;
    for (unsigned i = 0; i < sz; ++i)
        delete v[i];

}

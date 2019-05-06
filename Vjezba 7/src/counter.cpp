#include "counter.h"
#include <iostream>

using namespace OOP;

void counter::add(vehicle *v1) {
    passengers += v1->passengersCount();
    std::cout << v1->type()<< ", putnika: "<<v1->passengersCount()<<std::endl;
}

unsigned counter::total() {
    return passengers;
}

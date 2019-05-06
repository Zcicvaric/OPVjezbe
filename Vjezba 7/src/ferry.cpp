#include "ferry.h"

using namespace OOP;

ferry::ferry(int pass, int bikes, int cars) {
    passengers = pass + bikes + cars * 5;
}

unsigned ferry::passengersCount() {
    return passengers;
}

#include "car.h"

using namespace OOP;

car::car(int pass) {
    passengers = pass;
}
unsigned car::passengersCount() {
    return passengers;
}

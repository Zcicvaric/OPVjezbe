#include "bike.h"

using namespace OOP;

bike::bike(int pass) {
    passengers = pass;
}
unsigned bike::passengersCount() {
    return passengers;
}

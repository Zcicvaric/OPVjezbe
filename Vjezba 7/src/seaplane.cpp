#include "seaplane.h"

using namespace OOP;

seaplane::seaplane(int pass) {
    typeOfVehicle = "air-water";
    passengers = pass;
}
unsigned seaplane::passengersCount() {
    return passengers;
}

std::string seaplane::type() {
    return typeOfVehicle;
}

#include "aircraft.h"

using namespace OOP;

aircraft::aircraft() {
    typeOfVehicle = "Air";
}
std::string aircraft::type() {
    return typeOfVehicle;
}
unsigned aircraft::passengersCount() {
    return passengers;
}

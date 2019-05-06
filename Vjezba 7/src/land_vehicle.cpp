#include "land_vehicle.h"

using namespace OOP;

land_vehicle::land_vehicle() {
    typeOfVehicle = "Land";
}

std::string land_vehicle::type() {
    return typeOfVehicle;
}
unsigned land_vehicle::passengersCount() {
    return passengers;
}

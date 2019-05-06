#include "watercraft.h"

using namespace OOP;

watercraft::watercraft() {
    typeOfVehicle = "Water";
}
std::string watercraft::type() {
    return typeOfVehicle;
}
unsigned watercraft::passengersCount() {
    return passengers;
}

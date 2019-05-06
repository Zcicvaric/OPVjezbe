#include "catamaran.h"

using namespace OOP;

catamaran::catamaran(int pass) {
    passengers = pass;
}
unsigned catamaran::passengersCount() {
    return passengers;
}

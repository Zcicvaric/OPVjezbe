#ifndef BIKE_H
#define BIKE_H
#include "land_vehicle.h"


namespace OOP {

    class bike : public land_vehicle {
        public:
            bike(int pass = 1);
            unsigned passengersCount();
};
}

#endif // BIKE_H

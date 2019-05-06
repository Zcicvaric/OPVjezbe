#ifndef CAR_H
#define CAR_H
#include "land_vehicle.h"


namespace OOP {

class car : public land_vehicle {
    public:
        car(int pass = 5);
        unsigned passengersCount();
};
}

#endif // CAR_H

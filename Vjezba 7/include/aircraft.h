#ifndef AIRCRAFT_H
#define AIRCRAFT_H
#include "vehicle.h"


namespace OOP {

class aircraft : virtual public vehicle{
    protected:
        unsigned passengers;
        std::string typeOfVehicle;
    public:
        aircraft();
        unsigned passengersCount();
        std::string type();
};
}

#endif // AIRCRAFT_H

#ifndef LAND_VEHICLE_H
#define LAND_VEHICLE_H
#include "vehicle.h"

namespace OOP {

class land_vehicle : public vehicle {
    protected:
        unsigned passengers;
        std::string typeOfVehicle;
    public:
        land_vehicle();
        unsigned passengersCount();
        std::string type();
};
}
#endif // LAND_VEHICLE_H

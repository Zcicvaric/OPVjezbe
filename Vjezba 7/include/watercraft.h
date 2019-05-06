#ifndef WATERCRAFT_H
#define WATERCRAFT_H
#include "vehicle.h"

namespace OOP{


class watercraft : virtual public vehicle {
    protected:
        unsigned passengers;
        std::string typeOfVehicle;
    public:
        watercraft();
        unsigned passengersCount();
        std::string type();
};

}

#endif // WATERCRAFT_H

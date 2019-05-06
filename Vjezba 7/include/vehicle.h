#ifndef VEHICLE_H
#define VEHICLE_H
#include <string>

namespace OOP {

class vehicle
{
    public:
        virtual std::string type()=0;
        virtual unsigned passengersCount()=0;
};

}

#endif // VEHICLE_H

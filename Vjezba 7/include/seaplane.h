#ifndef SEAPLANE_H
#define SEAPLANE_H
#include "watercraft.h"
#include "aircraft.h"
namespace OOP {
    class seaplane : public watercraft, public aircraft {
        protected:
            unsigned passengers;
            std::string typeOfVehicle;
        public:
            seaplane(int pass);
            unsigned passengersCount();
            std::string type();
};
};

#endif // SEAPLANE_H

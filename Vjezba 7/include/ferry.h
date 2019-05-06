#ifndef FERRY_H
#define FERRY_H
#include "watercraft.h"

namespace OOP {
    class ferry : public watercraft {
        unsigned bikes;
        unsigned cars;
        public:
            ferry(int pass, int bikes, int cars);
            unsigned passengersCount();
};
};


#endif // FERRY_H

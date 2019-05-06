#ifndef CATAMARAN_H
#define CATAMARAN_H
#include "watercraft.h"

namespace OOP {
    class catamaran : public watercraft {
        public:
            catamaran(int pass);
            unsigned passengersCount();
};
};

#endif // CATAMARAN_H

#ifndef COUNTER_H
#define COUNTER_H
#include "vehicle.h"


namespace OOP {
    class counter {
        private:
            unsigned passengers = 0;
        public:
            void add(vehicle* v1);
            unsigned total();
};
}

#endif // COUNTER_H

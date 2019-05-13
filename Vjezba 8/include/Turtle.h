#ifndef TURTLE_H
#define TURTLE_H
#include "Reptile.h"

namespace OSS {

class Turtle : public Reptile
{
    public:
        Turtle(std::string vrsta, std::string name,int rodenje, int kavez, int obroci, int zivotniVijek, int period,float temp, int kolicinaPoObroku);
        ~Turtle(){};

};
}

#endif // TURTLE_H

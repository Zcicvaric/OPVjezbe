#ifndef ELEPHANT_H
#define ELEPHANT_H
#include "Mammal.h"

namespace OSS {

class Elephant : public Mammal
{
    public:
        Elephant(std::string vrsta, std::string name,int rodenje, int kavez, int obroci, int zivotniVijek, int period,float temp, int kolicinaPoObroku);
        ~Elephant(){};
};
}

#endif // ELEPHANT_H

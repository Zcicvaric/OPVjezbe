#ifndef TIGER_H
#define TIGER_H
#include "Mammal.h"

namespace OSS {

class Tiger : public Mammal
{
    public:
        Tiger(std::string vrsta, std::string name,int rodenje, int kavez, int obroci, int zivotniVijek, int period,float temp, int kolicinaPoObroku);
        ~Tiger() {};
};
}

#endif // TIGER_H

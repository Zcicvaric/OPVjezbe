#ifndef CROCODILE_H
#define CROCODILE_H
#include <Reptile.h>

namespace OSS {

class Crocodile : public Reptile
{
    public:
        Crocodile(std::string vrsta, std::string name,int rodenje, int kavez, int obroci, int zivotniVijek, int period,float temp, int kolicinaPoObroku);
        ~Crocodile(){};
};
}
#endif // CROCODILE_H

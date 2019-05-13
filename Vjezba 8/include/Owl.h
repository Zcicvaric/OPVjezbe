#ifndef OWL_H
#define OWL_H
#include <Bird.h>

namespace OSS {

class Owl : public Bird
{
    public:
        Owl(std::string vrsta, std::string name,int rodenje, int kavez, int obroci, int zivotniVijek, int period,float temp,int kolicinaPoObroku);
        ~Owl(){};

};
}

#endif // OWL_H

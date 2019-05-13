#ifndef GRIFFONVULTURE_H
#define GRIFFONVULTURE_H
#include "Bird.h"

namespace OSS {

class GriffonVulture : public Bird
{
    public:
        GriffonVulture(std::string vrsta, std::string name,int rodenje, int kavez, int obroci, int zivotniVijek, int period,float temp, int kolicinaPoObroku);
        ~GriffonVulture(){};
};
}

#endif // GRIFFONVULTURE_H

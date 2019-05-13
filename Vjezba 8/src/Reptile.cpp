#include "Reptile.h"

OSS::Reptile::Reptile(std::string vrsta, std::string name,int rodenje, int kavez, int obroci, int zivotniVijek, int period,float temp) : ZooAnimal(vrsta, name, rodenje, kavez, obroci, zivotniVijek)
{
    incubationPeriod = period;
    enviromentTemp = temp;
    razmnozavanje = "polaganje jaja";
}

OSS::Reptile::~Reptile()
{

}

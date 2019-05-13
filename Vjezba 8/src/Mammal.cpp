#include "Mammal.h"

OSS::Mammal::Mammal(std::string vrsta, std::string name,int rodenje, int kavez, int obroci, int zivotniVijek, int period,float temp) : ZooAnimal(vrsta, name, rodenje, kavez, obroci, zivotniVijek)
{
    avgBodyTemp = temp;
    gestationPeriod = period;
    razmnozavanje = "gestacija";
}

OSS::Mammal::~Mammal()
{
    //dtor
}


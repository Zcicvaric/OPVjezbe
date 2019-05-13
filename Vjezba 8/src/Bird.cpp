#include "Bird.h"

OSS::Bird::Bird(std::string vrsta, std::string name,int rodenje, int kavez, int obroci, int zivotniVijek, int period,float temp) :  ZooAnimal(vrsta, name, rodenje, kavez, obroci, zivotniVijek)
{
    incubationPeriod = period;
    avgBodyTemp = temp;
    razmnozavanje = "Polaganje jaja";
}

OSS::Bird::~Bird(){

}




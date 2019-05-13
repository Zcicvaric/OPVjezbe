#include "Crocodile.h"

OSS::Crocodile::Crocodile (std::string vrsta, std::string name,int rodenje, int kavez, int obroci, int zivotniVijek, int period,float temp, int kolicinaPoObroku) : Reptile(vrsta,name,rodenje,kavez,obroci,zivotniVijek,period,temp) {
    kolicinaHrane = kolicinaPoObroku;
}

#include "Tiger.h"

OSS::Tiger::Tiger (std::string vrsta, std::string name,int rodenje, int kavez, int obroci, int zivotniVijek, int period,float temp, int kolicinaPoObroku) : Mammal(vrsta,name,rodenje,kavez,obroci,zivotniVijek,period,temp) {
      kolicinaHrane = kolicinaPoObroku;
}

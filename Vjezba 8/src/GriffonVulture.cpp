#include "GriffonVulture.h"

OSS::GriffonVulture::GriffonVulture (std::string vrsta, std::string name,int rodenje, int kavez, int obroci, int zivotniVijek, int period,float temp, int kolicinaPoObroku) : Bird(vrsta,name,rodenje,kavez,obroci,zivotniVijek,period,temp) {
      kolicinaHrane = kolicinaPoObroku;
}

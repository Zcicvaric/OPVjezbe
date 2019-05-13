#ifndef MAMMAL_H
#define MAMMAL_H
#include <ZooAnimal.h>
#include <iostream>

namespace OSS {

class Mammal : public ZooAnimal
{
    public:
        Mammal(std::string vrsta, std::string name,int rodenje, int kavez, int obroci, int zivotniVijek, int period,float temp);
        ~Mammal();
        friend std::ostream& operator<<(std::ostream& output, const Mammal& m){
            output <<"Ime: "<<m.ime<<", vrsta: "<<m.vrsta<<", razmnozavanje: "<<m.razmnozavanje<<", gestacijski period: "<<m.gestationPeriod<< ", temperatura tijela: "<<m.avgBodyTemp;
            return output;
        }
        friend std::istream & operator>>(std::istream& in, Mammal& m){
            in >> m.ime;
            in >> m.vrsta;
            in >> m.razmnozavanje;
            in >> m.gestationPeriod;
            in >> m.avgBodyTemp;

        }
        int getKolicinaHrane() {return kolicinaHrane;};

    protected:
        int kolicinaHrane;
        int gestationPeriod;
        float avgBodyTemp;

};
}

#endif // MAMMAL_H

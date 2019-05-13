#ifndef BIRD_H
#define BIRD_H
#include <ZooAnimal.h>
#include <iostream>

namespace OSS {

class Bird : public ZooAnimal
{
    public:
        Bird(std::string vrsta, std::string name,int rodenje, int kavez, int obroci, int zivotniVijek, int period,float temp);
        ~Bird();
    friend std::ostream& operator<<(std::ostream& output, const Bird& b){
            output <<"Ime: "<<b.ime<<", vrsta: "<<b.vrsta<<", razmnozavanje: "<<b.razmnozavanje<<", vrijeme inkubacije: "<<b.incubationPeriod<< ", temperatura tijela: "<<b.avgBodyTemp;
            return output;
        }
     friend std::istream & operator>>(std::istream& in, Bird& b){
            in >> b.ime;
            in >> b.vrsta;
            in >> b.razmnozavanje;
            in >> b.incubationPeriod;
            in >> b.avgBodyTemp;

        }
        int getKolicinaHrane() {return kolicinaHrane;};
    protected:
        int kolicinaHrane;
        int incubationPeriod;
        float avgBodyTemp;
};
}

#endif // BIRD_H

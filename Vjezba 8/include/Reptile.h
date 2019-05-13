#ifndef REPTILE_H
#define REPTILE_H
#include <ZooAnimal.h>

namespace OSS {

class Reptile : public ZooAnimal
{
    public:
        Reptile(std::string vrsta, std::string name,int rodenje, int kavez, int obroci, int zivotniVijek, int period,float temp);
        ~Reptile();
        friend std::ostream& operator<<(std::ostream& output, const Reptile& r){
            output <<"Ime: "<<r.ime<<", vrsta: "<<r.vrsta<<", razmnozavanje: "<<r.razmnozavanje<<", vrijeme inkubacije: "<<r.incubationPeriod<< ", temperatura okoline: "<<r.enviromentTemp;
            return output;
        }
        friend std::istream & operator>>(std::istream& in, Reptile& r){
            in >> r.ime;
            in >> r.vrsta;
            in >> r.razmnozavanje;
            in >> r.incubationPeriod;
            in >> r.enviromentTemp;

        }
        int getKolicinaHrane() {return kolicinaHrane;};

    protected:
        int kolicinaHrane;
        int incubationPeriod;
        float enviromentTemp;
};
}

#endif // REPTILE_H

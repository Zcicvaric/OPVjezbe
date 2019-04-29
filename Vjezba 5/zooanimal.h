#ifndef ZOOANIMAL_H
#define ZOOANIMAL_H
#include <string>


class MasaZivotinje {
    float masa;
    int godinaVaganja;

};

class ZooAnimal
{
        std::string vrsta;
        std::string ime;
        int godinaRodenja;
        int brKaveza;
        int dnevnoObroka;
        int ocekivaniZivotniVijek;
    public:
        ZooAnimal() {vrsta = "pas", ime = "Rex", godinaRodenja = 2000, brKaveza = 0; dnevnoObroka = 3; ocekivaniZivotniVijek = 20;}
        ZooAnimal(std::string v, std::string i, int rodenje, int kavez,int obroci,int zivotniVijek);
        ~ZooAnimal();
};

#endif // ZOOANIMAL_H

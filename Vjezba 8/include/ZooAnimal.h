#ifndef ZOOANIMAL_H
#define ZOOANIMAL_H
#include <string>
#include <stdio.h>
#include <iostream>
#include <ctime>

namespace OSS {

class masaZivotinje {
    float masa;
    int godinaVaganja;
    public:
        masaZivotinje(){};
        void setMasa(float m) {masa = m;}
        void setGodinaVaganja(int godina) {godinaVaganja = godina;}
        const float getMasa() {return masa;}
        const int getGodinaVaganja() {return godinaVaganja;}
};

class ZooAnimal
{

        int godinaRodenja;
        int brKaveza;
        int dnevnoObroka;
        int ocekivaniZivotniVijek;
        int unesenihGodina = 0;
        masaZivotinje* EvidencijaMaseZivotinje;

protected:
        std::string vrsta;
        std::string ime;
        std::string razmnozavanje;

    public:
        ZooAnimal(){};
        ZooAnimal(std::string v, std::string i, int rodenje, int kavez,int obroci,int zivotniVijek);
        ZooAnimal (const ZooAnimal &zivotinja);
        ~ZooAnimal() {delete EvidencijaMaseZivotinje;};
        void promjeniBrojObroka(const bool uvecaj);
        void getZooAnimal() const;
        void dodajPodatkeoMasi();
        void ispisiPodatkeoMasi() const;
        int razlikaMase() const;
        int getDnevnoObroka() const;
};
}

#endif // ZOOANIMAL_H

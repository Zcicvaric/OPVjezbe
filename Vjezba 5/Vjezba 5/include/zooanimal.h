#ifndef ZOOANIMAL_H
#define ZOOANIMAL_H
#include <string>
#include <stdio.h>
#include <iostream>
#include <ctime>


class masaZivotinje {
    float masa;
    int godinaVaganja;
    public:
        masaZivotinje(){};
        void setMasa(float m) {masa = m;}
        void setGodinaVaganja(int godina) {godinaVaganja = godina;}
        const getMasa() {return masa;}
        const getGodinaVaganja() {return godinaVaganja;}
};

class ZooAnimal
{
        std::string vrsta;
        std::string ime;
        int godinaRodenja;
        int brKaveza;
        int dnevnoObroka;
        int ocekivaniZivotniVijek;
        int unesenihGodina = 0;
        masaZivotinje* EvidencijaMaseZivotinje;

    public:
        ZooAnimal(std::string v, std::string i, int rodenje, int kavez,int obroci,int zivotniVijek);
        ZooAnimal (const ZooAnimal &zivotinja);
        ~ZooAnimal() {std::cout<<"Pozvan je destruktor!"<<std::endl; delete EvidencijaMaseZivotinje;};
        void promjeniBrojObroka(const bool uvecaj);
        void getZooAnimal() const;
        void dodajPodatkeoMasi();
        void ispisiPodatkeoMasi() const;
        int razlikaMase() const;
};

#endif // ZOOANIMAL_H

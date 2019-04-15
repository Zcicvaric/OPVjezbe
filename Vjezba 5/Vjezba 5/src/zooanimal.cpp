#include "zooanimal.h"


ZooAnimal::ZooAnimal(std::string v, std::string i, int rodenje, int kavez,int obroci,int zivotniVijek) {
    std::cout<<"Pozvan je konstruktor!"<<std::endl;
    vrsta = v;
    ime = i;
    godinaRodenja = rodenje;
    brKaveza = kavez;
    dnevnoObroka = obroci;
    ocekivaniZivotniVijek = zivotniVijek;
    EvidencijaMaseZivotinje = new masaZivotinje [ocekivaniZivotniVijek*2];
}

ZooAnimal::ZooAnimal (const ZooAnimal &zivotinja) {
    vrsta = zivotinja.vrsta;
    ime = zivotinja.ime;
    godinaRodenja = zivotinja.godinaRodenja;
    brKaveza = zivotinja.brKaveza;
    dnevnoObroka = zivotinja.dnevnoObroka;
    ocekivaniZivotniVijek = zivotinja.ocekivaniZivotniVijek;

    EvidencijaMaseZivotinje = new masaZivotinje [ocekivaniZivotniVijek*2];
    if(zivotinja.EvidencijaMaseZivotinje)
        std::copy(zivotinja.EvidencijaMaseZivotinje, zivotinja.EvidencijaMaseZivotinje + zivotinja.ocekivaniZivotniVijek*2, EvidencijaMaseZivotinje);
    else
        EvidencijaMaseZivotinje = 0;
}

void ZooAnimal::getZooAnimal() const {
    std::cout<<"Vrsta: "<<vrsta<<std::endl;
    std::cout<<"Ime: "<<ime<<std::endl;
    std::cout<<"Godina rodenja: "<<godinaRodenja<<std::endl;
    std::cout<<"Broj kaveza: "<<brKaveza<<std::endl;
    std::cout<<"Broj obroka: "<<dnevnoObroka<<std::endl;
    std::cout<<"Ocekivani zivotni vijek: "<<dnevnoObroka<<std::endl;
    if(unesenihGodina) {
        std::cout<<"Evidencija mase zivotinje: "<<std::endl;
        ispisiPodatkeoMasi();
    }
}

void ZooAnimal::promjeniBrojObroka(const bool uvecaj) {
    if(uvecaj)
        dnevnoObroka++;
    else
        dnevnoObroka--;
}

void ZooAnimal::dodajPodatkeoMasi() {
    while(1) {
        int g;
        float m = 0.0;
        int indeksTekuceGodine = 0;
        bool tekucaGodinaUnesena = false;
        bool unesi = true;
        time_t vrijeme = time(NULL);
        tm* trenutnoVrijeme = localtime(&vrijeme);
        int tekucaGodina = trenutnoVrijeme->tm_year+1900;

        std::cout<<"Unesite godinu vaganja ili 0 za kraj unosa:"<<std::endl;
        std::cin>>g;
        if(g == 0) {
            return;
        }

        for(int i = 0; i < unesenihGodina; i++) {
            if(EvidencijaMaseZivotinje[i].getGodinaVaganja() == g && g != tekucaGodina) {
                unesi = false;
                std::cout<<"Moguce je unositi podatke samo za tekucu godinu ili za godinu kada nisu uneseni podatci!"<<std::endl;
                break;
            }
            if(EvidencijaMaseZivotinje[i].getGodinaVaganja() == g) {
                tekucaGodinaUnesena = true;
                indeksTekuceGodine = i;
            }
        }
        if(unesi) {
            std::cout<<"Unesite masu:"<<std::endl;
            std::cin>>m;
            if(tekucaGodinaUnesena) {
                EvidencijaMaseZivotinje[indeksTekuceGodine].setGodinaVaganja(g);
                EvidencijaMaseZivotinje[indeksTekuceGodine].setMasa(m);
            }
            else {
                EvidencijaMaseZivotinje[unesenihGodina].setGodinaVaganja(g);
                EvidencijaMaseZivotinje[unesenihGodina].setMasa(m);
                unesenihGodina++;
            }
        }
    }

}

int ZooAnimal::razlikaMase() const{ //1 - zivotinja je smrsavila, 2 - zivotinja se udebljala, 3 - razlika manja od 10%
    time_t vrijeme = time(NULL);
    tm* trenutnoVrijeme = localtime(&vrijeme);
    int tekucaGodina = trenutnoVrijeme->tm_year+1900;

    int zapisProsleGodine;
    int zapisTekuceGodine;
    bool postojiZapisOdProsleGodine = false;
    bool postojiZapisOdTekuceGodine = false;

    for(int i = 0; i < unesenihGodina; i++) {
        if(EvidencijaMaseZivotinje[i].getGodinaVaganja() == tekucaGodina-1) {
            zapisProsleGodine = i;
            postojiZapisOdProsleGodine = true;
        }
        if(EvidencijaMaseZivotinje[i].getGodinaVaganja() == tekucaGodina) {
            zapisTekuceGodine = i;
            postojiZapisOdTekuceGodine = true;
        }
    }
    if(postojiZapisOdProsleGodine && postojiZapisOdTekuceGodine) {
        if((EvidencijaMaseZivotinje[zapisTekuceGodine].getMasa() < EvidencijaMaseZivotinje[zapisProsleGodine].getMasa() * 0.9))
            return 1;
        else if((EvidencijaMaseZivotinje[zapisTekuceGodine].getMasa()  > EvidencijaMaseZivotinje[zapisProsleGodine].getMasa()) * 1.1)
            return 2;
        else
            return 3;
    }
    else {
        std::cout<<"Ne postoji zapis od prosle ili od tekuce godine!"<<std::endl;
    }
}


void ZooAnimal::ispisiPodatkeoMasi() const{
    for(int i = 0; i < unesenihGodina; i++) {
        std::cout<<"Godina: "<<EvidencijaMaseZivotinje[i].getGodinaVaganja()<<std::endl;
        std::cout<<"Masa: "<<EvidencijaMaseZivotinje[i].getMasa()<<std::endl;
        std::cout<<std::endl;
    }
}

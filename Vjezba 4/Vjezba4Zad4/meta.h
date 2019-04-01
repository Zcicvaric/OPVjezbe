#include "tocka.h"


class meta {

    float sirina;
    float visina;
    bool pogodena = false;
public:
    tocka lijevaDesnaTocka;
    void setSirina(float br) {sirina = br;}
    void setVisina (float br) {sirina = br;}
    void setPogodenaHit(bool hit) {pogodena = hit;}
    float getSirina() {return sirina;}
    float getVisina() {return visina;}
    bool getPogodena() {return pogodena;}
};

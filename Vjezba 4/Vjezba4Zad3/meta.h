#include "tocka.h"


class meta {

    float sirina;
    float visina;
public:
    tocka lijevaDesnaTocka;
    bool pogodena = false;
    void setSirina(float br) {sirina = br;}
    void setVisina (float br) {sirina = br;}
    float getSirina() {return sirina;}
    float getVisina() {return visina;}
};

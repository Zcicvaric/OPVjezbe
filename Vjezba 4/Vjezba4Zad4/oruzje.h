#pragma once
#include "tocka.h"


class oruzje {
    int clipSize;
    int bulletsInClip;

public:
    tocka polozaj;
    void setClipSize(int br) {clipSize = br;}
    void setBulletsInClip(int br) {bulletsInClip = br;}
    int getClipSize() {return clipSize;}
    int getBulletsInClip() {return bulletsInClip;}
    void shoot(oruzje& o1) {o1.bulletsInClip--;}
    void reload(oruzje& o1){o1.bulletsInClip = clipSize;}
    oruzje(){polozaj.randomTocka(polozaj,20,50);}
};

#include "tocka.h"

class oruzje {
    tocka polozaj;
    int clipSize;
    int bulletsInClip;

    public:
    void setClipSize(int br) {clipSize = br;}
    void setBulletsInClip(int br) {bulletsInClip = br;}
    int getClipSize() {return clipSize;}
    int getBulletsInClip() {return bulletsInClip;}
    void shoot(oruzje& o1) {o1.bulletsInClip--;}
    void reload(oruzje& o1){o1.bulletsInClip = clipSize;}

};

#include <iostream>
#include "meta.h"
#include "oruzje.h"

using namespace std;

int isHit(tocka pozOruzje, meta meta1) {

    if((pozOruzje.x > meta1.lijevaDesnaTocka.x && pozOruzje.x < (meta1.lijevaDesnaTocka.x + meta1.getSirina())) && (pozOruzje.z - meta1.getVisina()) > 0  && meta1.getPogodena() == false) {
        meta1.setPogodenaHit(true);
        return true;
    }
    return false;
}



int igraj(int brMeta) {
    int br_pogodenih = 0;

    oruzje wep1;

    meta nizMeta[brMeta];

    for(int i = 0; i < brMeta; i++) {
        nizMeta[i].lijevaDesnaTocka.randomTocka(nizMeta[i].lijevaDesnaTocka, 0, 20);
        nizMeta[i].setSirina(50);
        nizMeta[i].setVisina(5);
    }

    wep1.setClipSize(20);
    wep1.setBulletsInClip(20);
    wep1.polozaj.randomTocka(wep1.polozaj, 0, 20);

    float korak = 20 / wep1.getClipSize();

    wep1.polozaj.ispisiTocku(wep1.polozaj);


    for(int i = 0; i < wep1.getClipSize()/2; i++) {
        wep1.polozaj.x += korak;
        wep1.shoot(wep1);
        for(int j = 0; j < brMeta; j++) {
            if(isHit(wep1.polozaj, nizMeta[j]) == true) {
                br_pogodenih++;
                break;
            }
        }
    }
    wep1.polozaj.x -= korak * wep1.getClipSize()/2;

    for(int i = 0; i < wep1.getClipSize()/2; i++) {
        wep1.polozaj.x -= korak;
        wep1.shoot(wep1);
        for(int j = 0; j < brMeta; j++) {
            if(isHit(wep1.polozaj, nizMeta[j]) == true) {
                br_pogodenih++;
                break;
            }
        }
    }

    return br_pogodenih;
}

int main()
{
    int brMeta, brPogodenih;
    cout<<"Unesite broj meta:"<<endl;
    cin>>brMeta;

    brPogodenih = igraj(brMeta);

    cout<<"Pogodeno je: "<<brPogodenih<<" meta"<<endl;


    return 0;
}

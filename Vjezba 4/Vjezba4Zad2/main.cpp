#include <iostream>
#include "oruzje.h"

using namespace std;

int main()
{
    oruzje wep1;

    wep1.setClipSize(20);
    wep1.setBulletsInClip(10);

    cout<<wep1.getBulletsInClip()<<endl;

    wep1.reload(wep1);
    wep1.shoot(wep1);

    cout<<wep1.getClipSize()<<endl;

}

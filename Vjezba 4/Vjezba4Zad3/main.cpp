#include <iostream>
#include "meta.h"

using namespace std;

int main()
{
    meta target1;
    target1.lijevaDesnaTocka.randomTocka(target1.lijevaDesnaTocka, 0, 50);
    target1.setSirina(50);
    target1.setVisina(50);

    target1.lijevaDesnaTocka.ispisiTocku(target1.lijevaDesnaTocka);

}

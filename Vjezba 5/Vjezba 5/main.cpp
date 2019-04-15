#include <iostream>
#include "zooanimal.h"
#include <vector>

using namespace std;

void prehrana(vector<ZooAnimal> &z) {
    for(int i = 0; i < z.size(); i++) {
        if(z[i].razlikaMase() == 1)
            z[i].promjeniBrojObroka(true);
        else if(z[i].razlikaMase() == 2)
            z[i].promjeniBrojObroka(false);
    }
}

void ispisiZivotinje(vector<ZooAnimal>& z) {
    for(int i = 0; i<z.size(); i++) {
        z[i].getZooAnimal();
        cout<<endl;
    }
}



int main()
{

    vector<ZooAnimal> zivotinje;

    ZooAnimal z1("Pingvin", "Tux", 2005, 1, 4, 20);
    ZooAnimal z2("Morski pas", "Alfred", 2010, 2, 5, 200);
    ZooAnimal z3("Vidra", "Benedict", 2012, 3, 4, 15);
    ZooAnimal z4("Krokodil", "Dundee", 1990, 4, 5, 50);

    zivotinje.push_back(z1);
    zivotinje.push_back(z2);
    zivotinje.push_back(z3);
    zivotinje.push_back(z4);

    ispisiZivotinje(zivotinje);

    zivotinje[3].dodajPodatkeoMasi();

    prehrana(zivotinje);

    ispisiZivotinje(zivotinje);

    return 0;
}

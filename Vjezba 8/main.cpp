#include <iostream>
#include <vector>
#include <ZooAnimal.h>
#include <Crocodile.h>
#include <Elephant.h>
#include <GriffonVulture.h>
#include <Monkey.h>
#include <Owl.h>
#include <Tiger.h>
#include <Turtle.h>

using namespace std;
using namespace OSS;

int main()
{

    vector<Bird> birds;
    birds.push_back(Owl("Bird","Shumska", 2008,5,3,30,2,5,2));
    birds.push_back(GriffonVulture("Bird","Washington", 2005,3,2,50,5,10,5));

    vector<Mammal> mammals;
    mammals.push_back(Elephant("Mammal","Veliki", 1991, 2,3,100, 10, 25, 20));
    mammals.push_back(Monkey("Mammal","Sam",2006,4,3,20,4,35,2));
    mammals.push_back(Tiger("Mammal","Laf",2010,6,5,50,8,35,20));

    vector<Reptile> reptiles;
    reptiles.push_back(Crocodile("Reptile","Archie", 1990, 1, 2, 70, 12, 15, 50));
    reptiles.push_back(Turtle("Reptile","Kappa", 2012,7,3,150,5,7,4));


    int ukupnoObroka = 0;

    for(int i = 0; i < 2; i++) {
        cout<<birds[i]<<endl;
        cout<<reptiles[i]<<endl;
        cout<<mammals[i]<<endl;
        cout<<endl;
        ukupnoObroka+=birds[i].getDnevnoObroka() * birds[i].getKolicinaHrane();
        ukupnoObroka+=reptiles[i].getDnevnoObroka() * reptiles[i].getKolicinaHrane();
        ukupnoObroka+=mammals[i].getDnevnoObroka() * mammals[i].getKolicinaHrane();

    }
    cout<<mammals[2]<<endl;
    ukupnoObroka+=mammals[2].getDnevnoObroka() * mammals[2].getKolicinaHrane();

    cout<<"Ukupno obroka za jedan dan: "<<ukupnoObroka<<endl;


    return 0;
}

#include "tocka.h"
#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <math.h>
#include <time.h>


void tocka::postaviVrijednosti(tocka& t, double x, double y , double z) {
    cout<<"Unesi x"<<endl;
    cin>>t.x;

    cout<<"Unesi y"<<endl;
    cin>>t.y;

    cout<<"Unesi z"<<endl;
    cin>>t.z;
}

void tocka::randomTocka(tocka& t, float donjaGranica, float gornjaGranica) {
    srand(time(NULL));

    t.x = static_cast <float> (rand()) / (static_cast <float> (RAND_MAX/(gornjaGranica-donjaGranica)));
    t.y = static_cast <float> (rand()) / (static_cast <float> (RAND_MAX/(gornjaGranica-donjaGranica)));
    t.z = static_cast <float> (rand()) / (static_cast <float> (RAND_MAX/(gornjaGranica-donjaGranica)));
}

void tocka::ispisiTocku(const tocka& t) {
    cout<<"X: "<<t.x<<endl;
    cout<<"Y: "<<t.y<<endl;
    cout<<"Z: "<<t.z<<endl;
}

float tocka::udaljenost2D (const tocka& t1, const tocka& t2) {
    float rez = sqrt((t1.x - t2.x) * (t1.x - t2.x)  + (t1.y - t2.y) * (t1.y - t2.y));

    return rez;
}

float tocka::udaljenost3D(const tocka& t1, const tocka& t2) {
    float rez = pow(((t2.x - t1.x) * (t2.x - t1.x) + (t2.y - t1.y) * (t2.y - t1.y) + (t2.z - t1.z) * (t2.z - t1.z)), 2.0);

    return rez;
}



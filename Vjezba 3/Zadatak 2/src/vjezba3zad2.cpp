#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include "vjezba3zad2.h"


vector<int> unesi_vektor(int a = 0, int b = 100, int elemenata = 5, bool generiraj = false)
{
    vector <int> v1;

        if(!generiraj) {
            int unos;
            while(elemenata > 0) {
                cout<<"Unesite brojeve u vektor"<<endl;
                cin>>unos;
                if(unos < a || unos > b) {
                    cout<<"Unos nije ispravan"<<endl;
                }
                else {
                    v1.push_back(unos);
                    elemenata--;
                }

            }
        }
        else {
            while(elemenata > 0) {
                int br = (rand() % b) + a;
                v1.push_back(br);
                elemenata--;
            }
        }
    return v1;
}


void ispisi_vektor(vector<int> v, int velicina) {
    for(int i = 0; i < velicina; i++) {
        cout<<v[i]<<endl;
    }
}

int usporedba(int a, int b) {
    return (a < b);
}

vector<int> filter(vector<int> v1, int vel1, vector<int>v2) {
    vector<int> rez;

    sort(v1.begin(), v2.end());
    sort(v2.begin(), v2.end());
    for(int i = 0; i < vel1; i++) {
            if(!binary_search(v2.begin(), v2.end(),v1[i]))
                rez.push_back(v1[i]);

    }

}

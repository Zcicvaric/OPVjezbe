#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

vector<int> unesi_vektor(int a = 0, int b = 100, int elemenata = 5, bool generiraj = false) {
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

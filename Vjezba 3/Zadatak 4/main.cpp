#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

void igraj(vector<int>& v1) {
    srand(time(NULL));
    int poz = 0;
    while(1) {
        int potez_pc = rand() % 3 + 1;
        cout<<"PC je uzeo "<< potez_pc << " sibica"<<endl;
        poz += potez_pc;
        if(v1[poz] == 1) {
            cout<<"Kraj igre!";
            break;
        }

        int potez_igrac;
        while(1) {
            cout<<"Unesi broj sibica koji zelite uzeti: (Trenutni broj sibica je: " << v1[poz] << ")" << endl;
            cin>>potez_igrac;
            if(potez_igrac > 0 && potez_igrac <= 3)
                break;
            else {
                cout<<"Unesi broj sibica izmedu 1 i 3"<<endl;
            }
        }

        poz += potez_igrac;
        if(v1[poz] == 1) {
            cout<<"Pobjeda!"<<endl;
            break;
        }

    }

}



int main()
{
    vector <int> v1;

    for(int i = 21;i > 0; i--) {
        v1.push_back(i);
    }

    igraj(v1);

    return 0;
}

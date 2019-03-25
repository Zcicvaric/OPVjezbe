#include <iostream>
#include <vector>


using namespace std;

typedef struct _producent {
    string name;
    string movie;
    int year;

} Producent;

void nadi(vector <Producent> v) {
    int zastupljenost[v.size()];
    int poz = 0;

    int max_zastupljenost = 0;
    for(unsigned int i = 0; i < v.size(); i++) {
        int trenutni_zastupljenost = 0;
        for(unsigned j = i+1; j < v.size(); j++) {
            if(v[i].name == v[j].name)
                trenutni_zastupljenost++;
        }
        if(trenutni_zastupljenost > max_zastupljenost) {
            zastupljenost[poz] = i;
            poz++;
        }
    }

    cout<<"Najzastupljeniji su:"<<endl;

    for(int i = 0; i < poz; i++) {
            cout<<v[zastupljenost[i]].name<<endl;
    }

}


int main()
{
    vector <Producent> v1;

    while(1) {
        Producent novi;
        cout<<"Unesi ime producenta"<<endl;
        getline(cin, novi.name);
        cout<<"Unesi naziv filma"<<endl;
        getline(cin, novi.movie);
        cout<<"Unesi godinu"<<endl;
        cin>>novi.year;
        cin.ignore(1, '\n');

        v1.push_back(novi);

        cout<<"Kraj unosa? (Y/N)"<<endl;
        string odabir;
        getline(cin, odabir);
        if(odabir == "Y")
            break;
    }

    nadi(v1);


    return 0;
}

#include <iostream>
#include <vector>
#include <string>

using namespace std;


bool provjera(string str) {
    bool ispravan = true;
    int znamenke = 0;

    for(unsigned int i = 0; i < str.length(); i++) {
        if(!isdigit(str[i]) && !isupper(str[i])) {
            ispravan = false;
            break;
        }
        if(isdigit(str[i]))
            znamenke++;
    }

    if(znamenke == str.length())
        ispravan = false;

    if(str.length() >= 20)
        ispravan = false;

    return ispravan;
}

string izmjena(string str) {
    bool samoSlova = true;

    for(int i = 0; i < str.length(); i++) {
        if(!(isalpha(str[i]))) {
            samoSlova = false;
            break;
        }
    }

    if(samoSlova) {
        for(int i = 0; i < str.length(); i++) {
            int brPonavljanja = 0;
            char trenutni = str[i];

            for(int j = i; j < str.length(); j++) {
                if(str[j] == trenutni)
                    brPonavljanja++;
                else
                    break;
            }
            if(brPonavljanja >= 2) {
                str.erase(i+1, brPonavljanja-2);
                string br = to_string(brPonavljanja);
                str.replace(i, 1, br);
            }
        }
    }

    else {
        for(int i = 0; i<str.length(); i++) {
            if(!isalpha(str[i])) {
                int br = str[i] - '0';
                str.erase(i, 1);
                while(br > 1) {
                    string slovo = string() + str[i];
                    str.insert(i, slovo);
                    br--;
                }

            }
        }
    }



    return str;
}


int main()
{
    int velicinaVektora;
    cout<<"Unesi velicinu vektora"<<endl;
    cin>>velicinaVektora;
    vector <string>v1;

    while(velicinaVektora > 0) {
        string str;
        cout<<"Unesi string"<<endl;
        cin>>str;
        bool ispravan = provjera(str);
        str = izmjena(str);

        if(ispravan) {
            v1.push_back(str);
            velicinaVektora--;
        }
        else {
            cout<<"Nije ispravan unos!"<<endl;
        }

    }

    for(unsigned int i = 0; i<v1.size(); i++) {
        cout<<v1[i]<<endl;
    }


    return 0;
}

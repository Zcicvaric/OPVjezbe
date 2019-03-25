#include <iostream>
#include <string>
#include <vector>
#include <sstream>


using namespace std;


string ispravi (string str) {
    vector <string> v;

    string rez = "";

    istringstream ss(str);

    while(ss) {
        string rijec;
        ss >> rijec;
        if(rijec.find(",", 0) == 0 && rijec.length() != 1) {
            rijec.insert(1, " ");
        }
        v.push_back(rijec);

    }

    for(int i = 0; i < v.size(); i++) {
       if(v[i][0] == ',' || i == 0 || i == v.size()-2) {
            rez+= v[i];
        }
        else {
            rez+= " ";
            rez+= v[i];

        }

    }

    return rez;
}




int main()
{
    string recenica = "Ja bih  ,ako  ikako  mogu  ,  ovu  recenicu  napisala  ispravno  .";

    string rez = ispravi(recenica);

    cout<<rez<<endl;


}

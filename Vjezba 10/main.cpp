#include <iostream>
#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>
#include <vector>
#include <ctime>
#include <fstream>
using namespace std;

class Iznimka {
public:
    string err;
    Iznimka(const string s) {
        zapisi(s);
    }
    string vrijeme() {
        time_t now = time(0);
        char* dt = ctime(&now);
        return dt;
    }
    void zapisi(string err) {
        string v = vrijeme();
        ofstream zapisnik;
        zapisnik.open("errors.txt", ios_base::out|ios_base::app);
        zapisnik<< v + " " + err + "\n";
        zapisnik.close();
    }
};

int unesiBroj() {
    int br;
    cout<<"Unesite broj"<<endl;
    cin>>br;
    if(cin.fail()) {
        throw Iznimka("Nije unesen broj");
    }
    return br;
}

char unesiOperator() {
    char op;
    bool ispravan = false;
    char podrzani[] = {'+','-','*','/'};
    cout<<"Unesite operator"<<endl;
    cin>>op;
    for(int i = 0; i < 4; i++) {
        if(op == podrzani[i]) {
            ispravan = true;
            break;
        }
    }
    if(!ispravan)
        throw Iznimka("Nije unesen ispravan operator");
}

int izracunaj(int op1, int op2, char operacija) {
    if(operacija == '+')
        return op1+op2;
    if(operacija == '-')
        return op1-op2;
    if(operacija == '*')
        return op1*op2;
    if(operacija == '/') {
        if(op1 == 0 || op2 == 0)
            throw Iznimka("Djeljenje s nulom!");
        else
            return op1/op2;
    }
}


int main()
{
    try {
        while(1) {
            int br1, br2;
            char operacija;
            vector<int> rjesenja;
            br1 = unesiBroj();
            br2 = unesiBroj();
            operacija = unesiOperator();
            rjesenja.push_back(izracunaj(br1,br2,operacija));
        }
    }
    catch(Iznimka m) {

    }

    return 0;
}

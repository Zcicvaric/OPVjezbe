#ifndef VJEZBA3ZAD2_H
#define VJEZBA3ZAD2_H
#include<vector>
#include<algorithm>


using namespace std;


vector<int> filter(vector<int> v1, int vel1, vector<int> v2) {
    vector<int> rez;


    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    for(int i = 0; i < vel1; i++) {
            if(!binary_search(v2.begin(), v2.end(),v1[i]))
                rez.push_back(v1[i]);

    }

    return rez;

}


#endif // VJEZBA3ZAD2_H

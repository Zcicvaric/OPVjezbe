#include <iostream>

using namespace std;

int* spoji(int arr1[], int br1, int arr2[], int br2) {
    int* rez;
    rez = new int[br1+br2];
    int poz = 0;

    for(int i = 0; i<(br1+br2); i++) {
        if(arr1[i] %2 == 0 && i <br1) {
            rez[poz] = arr1[i];
            poz++;
        }
        if(arr2[i] %2 == 0 && i < br2) {
            rez[poz] = arr2[i];
            poz++;
        }
    }
    for(int i = 0; i<(br1+br2); i++) {
        if(arr1[i] %2 != 0 && i < br1) {
            rez[poz] = arr1[i];
            poz++;
        }
        if(arr2[i] %2 != 0 && i < br2) {
            rez[poz] = arr2[i];
            poz++;
        }
    }

    return rez;
}

int main()
{
    int arr1[] = {1,9,3,4,5,6};
    int br1 = 6;
    int arr2[] = {7,8,9,10,11,12,13};
    int br2 = 7;

    int* rez = new int[br1+br2];
    rez = spoji(arr1, br1, arr2, br2);

    for(int i = 0; i < (br1+br2); i++) {
        cout<<rez[i]<<endl;
    }

    return 0;
}

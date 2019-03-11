#include <iostream>
#include <algorithm>

using namespace std;

int usporedi(int i, int j) {
    return (i<j);
}


int* provjera(int arr[], int br) {
    int checklist[9] = {0};
    for(int i = 0; i < br; i++) {
        checklist[arr [i] -1] = 1;
    }
    for(int i = 0; i<9; i++) {
        if(checklist[i] == 0) {
            arr[br+1] = i+1;
            br++;
        }
    }

    sort(&arr[0], &arr[br+1], usporedi);
    return arr;
}


int main()
{
    int n = 10;
    int br_unosa = 0;
    int* arr = new  int[n];
    int* arr2;
    bool novi = false;
    while(1) {
        int unos;
        if(br_unosa == n) {
        arr2 = new  int[2*n];
            for (int i = 0; i < n; ++i)
                arr2[i] = arr[i];
            n = n*2;
            novi = true;
        }
        cout<<"Unesite brojeve"<<endl;
        cin>>unos;
        if(unos < 1 || unos > 9) {
            if(!novi) {
                arr = provjera(arr, br_unosa);
            }
            else {
                arr2 = provjera(arr2, br_unosa);
            }
            break;
        }

        if(!novi) {
            arr[br_unosa] = unos;
        }
        else {
            arr2[br_unosa] = unos;
        }
        br_unosa++;

    }
    if(novi) {
        free(arr);
    }

    for(int i = 1; i<n; i++) {
        if(!novi) {
            cout<<arr[i]<<endl;
        }
        else {
            cout<<arr2[i]<<endl;
        }
    }

    return 0;

}

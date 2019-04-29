#include "Array.h"
#include <iostream>

int OOP::Array::counter = 0;

OOP::Array::Array(int velicina) {
    arr = new int[velicina];
    velicinaNiza = velicina;
    counter++;
}
OOP::Array::Array(const Array &arr2) {
    velicinaNiza = arr2.velicinaNiza;
    for(int i = 0; i < velicinaNiza; i++) {
        setArr(i, arr2.getArr(i));
    }
}
OOP::Array::~Array() {
    delete arr;
    counter--;
}
void OOP::Array::setArr(int poz, int broj) {
    arr[poz] = broj;
}
int OOP::Array::getArr(int poz) const {
    return arr[poz];
}


OOP::Array OOP::Array::operator=(const Array& arr2) {
    velicinaNiza = arr2.velicinaNiza;
    for(int i = 0; i < velicinaNiza; i++) {
        setArr(i, arr2.getArr(i));
    }
}

OOP::Array OOP::Array::operator+(const Array& arr2) {
    Array rez(velicinaNiza + arr2.velicinaNiza);
    int i = 0;
    for(i = 0; i < velicinaNiza; i++)
        rez.setArr(i, getArr(i));
    for(int j=velicinaNiza; j < arr2.velicinaNiza + velicinaNiza; j++)
        rez.setArr(j, arr2.getArr(j-velicinaNiza));
    return rez;
}


OOP::Array OOP::Array::operator-(const Array& arr2) {
    Array rez(velicinaNiza);
    bool upisi = true;
    int poz = 0;
    for(int i = 0; i < velicinaNiza; i++) {
        for(int j = 0; j < arr2.velicinaNiza; j++) {
            if(getArr(i) == arr2.getArr(j)) {
                upisi = false;
                break;
            }
        }
        if(upisi) {
            rez.setArr(poz,getArr(i));
            poz++;
        }
    }
    return rez;
}

bool OOP::Array::operator==(const Array& arr2) {
    if(velicinaNiza != arr2.velicinaNiza)
        return false;
    for(int i = 0; i < velicinaNiza; i++) {
        if(getArr(i) != arr2.getArr(i) && getArr(i) != NULL || getArr(i) != arr2.getArr(i) && arr2.getArr(i) != NULL)
            return false;
    }
    return true;
}

bool OOP::Array::operator!=(const Array &arr2) {
    if(velicinaNiza != arr2.velicinaNiza)
        return true;
    for(int i = 0; i < velicinaNiza; i++) {
        if(getArr(i) != arr2.getArr(i) && getArr(i) != NULL || getArr(i) != arr2.getArr(i) && arr2.getArr(i) != NULL)
            return true;
    }
    return false;
}
int OOP::Array::getCounter() {
    return Array::counter;
}

int OOP::Array::operator[](const int br) {
    return getArr(br);
}


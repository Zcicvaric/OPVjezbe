#include <iostream>
#include "Array.h"

using namespace std;

int main()
{
    OOP::Array a1(20);
    OOP::Array a2(20);

    a1.setArr(0, 30);
    a1.setArr(1, 55);
    a1.setArr(2, 30);
    a2.setArr(0, 30);
    OOP::Array a3 = a1 - a2;
/*
    cout<<a3.getArr(0)<<endl;
    cout<<a3.getArr(1)<<endl;
    cout<<a3.getArr(2)<<endl;
*/
    bool isti = a1 == a2;
    bool razliciti = a1 != a2;
    cout<<a1[0]<<endl;
    cout<<a1.getCounter()<<endl;

    cin>>a1;
    cout<<a1;

    return 0;
}

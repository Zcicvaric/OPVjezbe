#ifndef ARRAY_H
#define ARRAY_H
#include <iostream>


namespace OOP {

class Array
{
    int* arr;
    static int counter;
    public:
        int velicinaNiza;
        Array(){};
        ~Array();
        Array(int velicina);
        Array(const Array &arr2);
        void setArr(int poz, int broj);
        int  getArr(int poz) const;
        friend std::ostream &operator<<(std::ostream &output, Array& arr2) {
            for(int i = 0; i < arr2.velicinaNiza; i++) {
                if(arr2.getArr(i) != NULL)
                    output<<arr2.getArr(i)<<std::endl;
            }
            return output;
        };
        friend std::istream &operator>>(std::istream &input, Array& arr2) {
            int index = 0, br = 0;
            input >> index >> br;
            arr2.setArr(index, br);
            return input;
        };
        Array operator=(const Array& arr2);
        Array operator+(const Array& arr2);
        Array operator-(const Array& arr2);
        bool operator==(const Array& arr2);
        bool operator!=(const Array& arr2);
        int operator[](const int br);
        int getCounter();
};
}



#endif // ARRAY_H

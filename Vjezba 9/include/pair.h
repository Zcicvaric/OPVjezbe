#ifndef PAIR_H
#define PAIR_H
#include <iostream>


template<typename T1, typename T2>
class Pair
{

    public:
        T1 first;
        T2 second;
        Pair() : first(T1()), second(T2()){}
        Pair(const T1& t1 = -1, const T2& t2 = -1) : first(t1), second(t2){}
        Pair(const Pair<T1, T2>& other) : first(other.first), second(other.second){}
        bool operator==(const Pair<T1, T2>& other) const
        {
            return first == other.first && second == other.second;
        }
        bool operator!=(const Pair<T1, T2>& other) const
        {
            return first != other.first || second != other.second;
        }
        bool operator<(const Pair<T1, T2>& other) const
        {
            return first < other.first && second < other.second;
        }
        bool operator<=(const Pair<T1, T2>& other) const
        {
            return first <= other.first && second <= other.second;
        }
        bool operator>(const Pair<T1, T2>& other) const
        {
            return first > other.first && second > other.second;
        }
        bool operator>=(const Pair<T1, T2>& other) const
        {
            return first >= other.first && second >= other.second;
        }
        Pair operator=(Pair<T1, T2>& par) {
            first = par.first;
            second = par.second;
        }
        friend std::ostream& operator<<(std::ostream& output, const Pair<T1, T2>& r){
            output <<r.first<<", "<< r.second;
            return output;
        }
        friend std::istream& operator>>(std::istream &in, Pair<T1, T2>&p) {
            std::cout<<"proslo base"<<std::endl;
            in >> p.first;
            in >> p.second;
            return in;
        }
        void swap2(Pair<T1, T2>& other) {
            Pair<T1, T2> temp;
            temp = *this;
            *this = other;
            other = temp;
        }
};
#endif // PAIR_H

#ifndef PAIRSTRING_H
#define PAIRSTRING_H
#include <pair.h>
#include <string>


template<>
class Pair<char*, char*>
{
    char* first;
    char* second;
    public:
        Pair(){}
        ~Pair(){}
        Pair(char* t1, char* t2) : first(t1), second(t2){}
        Pair(Pair<char*, char*>& other) : first(other.first), second(other.second){}
        bool operator==(const Pair<char*, char*>& other) const
        {
            return first == other.first && second == other.second;
        }
        bool operator!=(const Pair<char*, char*>& other) const
        {
            return first != other.first || second != other.second;
        }
        bool operator<(const Pair<char*, char*>& other) const
        {
            return first < other.first && second < other.second;
        }
        bool operator<=(const Pair<char*, char*>& other) const
        {
            return first <= other.first && second <= other.second;
        }
        bool operator>(const Pair<char*, char*>& other) const
        {
            return first > other.first && second > other.second;
        }
        bool operator>=(const Pair<char*, char*>& other) const
        {
            return first >= other.first && second >= other.second;
        }
        Pair operator=(Pair<char*, char*>& par) {
            first = par.first;
            second = par.second;
        }
        friend std::ostream& operator<<(std::ostream& output, const Pair<char*, char*>& r){
            output <<r.first<<", "<< r.second;
            return output;
        }
        friend std::istream& operator>>(std::istream &in, Pair<char*, char*>&p) {
            std::cout<<"proslo"<<std::endl;
            in >> p.first;
            in >> p.second;
            return in;
        }
        /*void swap2(Pair<char, char>& other) {
            Pair<char, char> temp;
            temp = *this;
            *this = other;
            other = temp;
        }*/
};

#endif // PAIRSTRING_H

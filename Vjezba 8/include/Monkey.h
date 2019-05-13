#ifndef MONKEY_H
#define MONKEY_H
#include "Mammal.h"

namespace OSS {

class Monkey : public Mammal
{
    public:
        Monkey(std::string vrsta, std::string name,int rodenje, int kavez, int obroci, int zivotniVijek, int period,float temp, int kolicinaPoObroku);
        ~Monkey() {};
};
}

#endif // MONKEY_H

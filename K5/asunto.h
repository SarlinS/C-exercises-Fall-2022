#ifndef ASUNTO_H
#define ASUNTO_H
#include <iostream>

using namespace std;

class Asunto
{
public:
    Asunto();
    void maarita(int, int);
    double laskeKulutus(double);
    const static int asukasMaara = 2;
    const static int neliot = 100;
};

#endif // ASUNTO_H

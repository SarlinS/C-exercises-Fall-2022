#ifndef KERROS_H
#define KERROS_H
#include "asunto.h"

class Kerros
{
public:
    Kerros();
    virtual void maaritaAsunnot();
    double laskeKulutus(double);
    Asunto objekti1;
    Asunto objekti2;
    Asunto objekti3;
    Asunto objekti4;
    Asunto *as1 = &objekti1;
    Asunto *as2 = &objekti2;
    Asunto *as3 = &objekti3;
    Asunto *as4 = &objekti4;
};

#endif // KERROS_H

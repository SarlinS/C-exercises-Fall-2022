#ifndef KERROSTALO_H
#define KERROSTALO_H
#include "kerros.h"
#include "katutaso.h"


class Kerrostalo
{
public:
    Kerrostalo();
    double laskeKulutus(double);
    Katutaso objekti3;
    Katutaso *eka = &objekti3;
    Kerros objekti4;
    Kerros objekti5;
    Kerros *toka = &objekti4;
    Kerros *kolmas = &objekti5;
};

#endif // KERROSTALO_H

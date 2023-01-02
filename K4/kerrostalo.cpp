#include "kerrostalo.h"

Kerrostalo::Kerrostalo()
{
    cout << "Kerrostalo on nyt luotu" << endl;
    eka.maaritaAsunnot();
    toka.maaritaAsunnot();
    kolmas.maaritaAsunnot();
}

double Kerrostalo::laskeKulutus(double d)
{
    cout << "Kerrostalon kulutus = " << 14 * Asunto::asukasMaara * Asunto::neliot * d << ", kun hinta on " << d << endl;
    return d;
}

#ifndef KATUTASO_H
#define KATUTASO_H
#include "asunto.h"
#include "kerros.h"


class Katutaso : public Kerros
{
public:
    Katutaso();
    void maaritaAsunnot() override;
    double laskeKulutus(double);
    Asunto as1, as2;

};

#endif // KATUTASO_H

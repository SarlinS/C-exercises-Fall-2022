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
    Asunto objekti1;
    Asunto objekti2;
    Asunto *as1 = &objekti1;
    Asunto *as2 = &objekti2;
};

#endif // KATUTASO_H

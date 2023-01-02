#include "asunto.h"

Asunto::Asunto()
{
    cout << "Asunto on luotu" << endl;
    //maarita(2, 100);
}

void Asunto::maarita(int /*a*/, int /*n*/)
{
    cout << "Asunto on maaritetty. Asukkaita " << asukasMaara << " ja nelioita " << neliot << endl;
    //asukasMaara = a;
    //neliot = n;
}

double Asunto::laskeKulutus(double d)
{
    cout << "Asunnon kulutus, kun hinta = " << d << " on " << asukasMaara * neliot * d << endl;
    return d;
}

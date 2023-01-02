#include "katutaso.h"

Katutaso::Katutaso()
{
    cout << "Katutaso on nyt luotu" << endl;
    //as1.maarita(2, 100);
    //as2.maarita(2, 100);
}

void Katutaso:: maaritaAsunnot()
{
    cout << "Maaritetaan 2kpl katutason asuntoja" << endl;
    cout << "Asunto on nyt maaritetty. Asukkaita = " << Asunto::asukasMaara << " ja nelioita " << Asunto::neliot << endl;
    cout << "Asunto on nyt maaritetty. Asukkaita = " << Asunto::asukasMaara << " ja nelioita " << Asunto::neliot << endl;
    Kerros::maaritaAsunnot();
}

double Katutaso::laskeKulutus(double d)
{
    cout << "Asunnon kulutus, kun hinta = "<< d << " on " << Asunto::asukasMaara * Asunto::neliot * d << endl;
    return d;
}

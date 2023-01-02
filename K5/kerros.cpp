#include "kerros.h"

Kerros::Kerros()
{
    cout << "Kerros on nyt luotu" << endl;
    //as1.maarita(2, 100);
    //as2.maarita(2, 100);
    //as3.maarita(2, 100);
    //as4.maarita(2, 100);
}

void Kerros::maaritaAsunnot()
{
    cout << "Maaritetaan 4kpl kerroksen asuntoja" << endl;
    cout << "Asunto on nyt maaritetty. Asukkaita = " << Asunto::asukasMaara << " ja nelioita " << Asunto::neliot << endl;
    cout << "Asunto on nyt maaritetty. Asukkaita = " << Asunto::asukasMaara << " ja nelioita " << Asunto::neliot << endl;
    cout << "Asunto on nyt maaritetty. Asukkaita = " << Asunto::asukasMaara << " ja nelioita " << Asunto::neliot << endl;
    cout << "Asunto on nyt maaritetty. Asukkaita = " << Asunto::asukasMaara << " ja nelioita " << Asunto::neliot << endl;
}

double Kerros::laskeKulutus(double d)
{
    cout << "Asunnon kulutus, kun hinta = "<< d << " on " << Asunto::asukasMaara * Asunto::neliot * d << endl;
    return d;
}

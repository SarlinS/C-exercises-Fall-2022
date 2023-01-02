#include "italianchef.h"

ItalianChef::ItalianChef(string s, int, int):Chef(s)
{
    name = s;
    //cout << "Chef " << s << " konstruktori" << endl;
}

ItalianChef::~ItalianChef()
{
    //cout << "Chef " << name << " destruktori" << endl;
}

string ItalianChef::getName()
{
    return name; // name = "Mario"
}

void ItalianChef::makePasta(int, int)
{
    cout << "Chef " << name << " makes pasta with special recipe" << endl;
    cout << "Chef " << name << " uses jauhot = " << jauhot << endl;
    cout << "Chef " << name << " uses vesi = " << vesi << endl;
}

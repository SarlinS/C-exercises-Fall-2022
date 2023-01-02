#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include "chef.h"

class ItalianChef : public Chef
{
public:
    ItalianChef(string, int, int);
    ~ItalianChef();
    string getName();
    void makePasta(int, int);

private:
    int vesi = 100;
    int jauhot = 250;
};

#endif // ITALIANCHEF_H

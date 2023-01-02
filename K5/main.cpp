#include <iostream>
#include "kerrostalo.h"


using namespace std;

int main()
{
   // Asunto asunto;
   // asunto.maarita(2, 100);
   // asunto.laskeKulutus(1);

   Kerrostalo *olio;
   olio = new Kerrostalo;
   olio -> laskeKulutus(1);

}

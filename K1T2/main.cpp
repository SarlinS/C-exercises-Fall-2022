// Tee tehtävän 1 ohjelma oman funktion sisälle niin, että sitä kutsutaan main-funktiosta.


#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void munFunktio();

int main()
{
    munFunktio();
    return 0;
}

void munFunktio(){
    int arvaus;

    srand(time(0));

    int satuluku = rand() % 19 + 1;
    cout << "Pelataan peli\x84! Anna numero 1 ja 20 v\x84lilt\x84: " << endl;
    cin >> arvaus;

    while(arvaus  != satuluku){
        if (arvaus < satuluku){
            cout << "Luku on suurempi!" << endl;
            cin >> arvaus;
        }

        if (arvaus > satuluku){
            cout << "Luku on pienempi!" << endl;
            cin >> arvaus;
        }
    }

    cout << "Oikea vastaus!" << endl;
}

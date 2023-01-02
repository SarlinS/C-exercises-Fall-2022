/* Laadi ohjelma, joka pyytää pelaajaa arvaamaan arvotun satunnaisen luvun annetulta väliltä 1-n. Pelaajaa autetaan kertomalla onko hänen arvauksensa pienempi tai suurempi tai yhtäsuuri kuin etsittävä luku. Kun arvaus on yhtäsuuri kuin luku, peli päättyy.
Kirjoita ohjalma main-funktion sisälle ns. pääohjelmaksi. Korkein arvattava luku on 20. Ohjelman runko voisi olla jotain seuraavan kaltaista:
Arvotaan satunnainen luku
Kysytään pelaajalta arvaus
Tarkistetaan onko arvaus pienempi, suurempi tai yhtäsuuri kuin luku
Kerrotaan tarkistuksen tulos tyyliin ”luku on pienempi/suurempi” tai ”oikea vastaus”
Jos pelaajan vastaus ei ollut oikein, niin palataan kohtaan 2.

Vinkkejä:
-Tarvittavia muuttujia on siis vähintään 2, etsittävä luku ja palaajan arvaus.
-Satunnaislukugeneraattori löytyy standardikirjastoista cstdlib ja ctime. Nämä pitää siis #include-käskyillä tuoda ohjelmaan. Generaattorista tarvitaan funktiot srand(), joka alustaa satunnaislukugeneraattorin ja rand(), joka arpoo luvun. Arvotun luvun voi rajoittaa halutulle välille esim modulo-operaation=jakojäännös (%) avulla (10%3 = 1)
-Ohjelmaa kirjoitettaessa ja testattaessa on syytä tulostaa cout:lla tietoa ruudulle. Kannattanee aloittaa tuon satunnaislukugeneraattorin toiminnan testauksella ja todistaa itselleen, että generoitu ja esim modulo operaattorilla rajoitettu luku on välillä 1-20.

*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
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
    return 0;
}

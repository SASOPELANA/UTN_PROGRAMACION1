#include <iostream>
using namespace std;

int main(){

    /*
    15 La amplitud térmica es la diferencia entre la temperatura máxima y la temperatura mínima en una zona y tiempo determinado. 
       Dada la temperatura máxima y la temperatura mínima de San Fernando de ayer, calcular y mostrar la amplitud térmica.
       NOTA: El usuario ingresará como temperatura máxima un valor mayor o igual al de la temperatura mínima.
    */

    int temperatura_maxima, temperatura_minima, amplitud_termica;

    cout << "Diguite la temperatura máxima de la localidad, del dia de ayer: " << endl;
    cin >> temperatura_maxima;
    cout << "Diguite la temperaura mínima de la localidad, del dia de ayer: " << endl;
    cin >> temperatura_minima;
    cout << endl;

    amplitud_termica = temperatura_maxima - temperatura_minima;

    cout << "La amplitud térmica es: " << amplitud_termica << "°C " << endl;

    cout << endl << "--Fin del programa--" << endl;

    return 0;
}
#include <iostream>
using namespace std;

int main(){

    /**
    16 El Laboratorio V&V hace frascos de píldoras para aprender a programar. Cada frasco contiene 75 píldoras y cada píldora contiene 45 mg de Betamol, 
       2 grs de Micilina y 7 mg de Ácido Sinítico.
       Nos solicitan un programa donde se ingrese la cantidad de frascos de un pedido y muestre la cantidad de miligramos de Betamol, 
       Micilina y de Ácido Sinítico que son necesarios para elaborarlos.
    */

    int frascos, total_pildoras, betamol_total_mg, micilina_total_mg, acido_sinitico_total_mg;

    cout << "Diguite cantidad de frascos del pedido: " << endl;
    cin >> frascos;
    cout << endl;

    total_pildoras = frascos * 75;

    betamol_total_mg = total_pildoras * 45;
    micilina_total_mg = total_pildoras * 2000;
    acido_sinitico_total_mg = total_pildoras * 7;

    cout << "Cantidad de frascos: " << frascos << "." << endl;
    cout << "La cantidad de miligramos de Betamol es: " << betamol_total_mg << " mg." << endl;
    cout << "La cantidad de miligramos de Micilina es: " << micilina_total_mg << " mg." << endl;
    cout << "La cantidad de miligramos de Ácido Sinítico es: " << acido_sinitico_total_mg << " mg." << endl;


    return 0;
}
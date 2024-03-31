#include <iostream>
using namespace std;

int main()
{
    /**
    18 Una empresa de electricidad cobra el servicio a sus clientes de acuerdo a la siguiente escala: 
       $10 por kilovatio (kW) por el consumo hasta los primeros 100 kW de consumo. 
       $12 por kW por el consumo excedente de 101 a 200 kW. 
       $15 por kW por el consumo excedente de 201 kW en adelante.

       Hacer un programa para que, dado el consumo en kilovatios de un determinado cliente, el programa calcule e informe el total a pagar.
       Ejemplo 1: Un consumo de 55 kW, se calculará: $ 10 x 55= $ 550 
       Ejemplo 2: Un consumo de 125 kW, se calculará: $10 x 100 + $12 x 25 = $1300.
       Ejemplo 3: Un consumo de 250 kW, se calculará: $10 x 100 + $12 x 100 + $15 x 50 = $2950.
    */

    int kw, kw1 = 0, kw2 = 0, kw3 = 0;

    cout << "Ingrese la cantidad de kilovatios consumido por el cliente: " << endl;
    cin >> kw;
    cout << endl;

    if (kw <= 100)
    {
        kw1 = kw * 10;
        cout << "El total a pagar por el cliente es: $" << kw1 << endl;
    }else if(kw <= 200)
    {
        kw1 = 10 * 100;
        kw2 = kw - 100;
        kw2 = kw2 * 12;
        kw2 = kw1 + kw2;
        cout << "El total a pagar por el cliente es: $" << kw2 << endl;
    }else
    {
        kw1 = 100 * 10;
        kw2 = 100 * 12;
        kw3 = kw - 200;
        kw3 = kw3 * 15;
        kw3 = kw1 + kw2 + kw3;
        cout << "El total a pagar por el cliente es: $" << kw3 << endl;
    }

    return 0;
}
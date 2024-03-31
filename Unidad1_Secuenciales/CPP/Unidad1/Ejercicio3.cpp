#include <iostream>
using namespace std;

int main()
{
    /*
    3 Una concesionaria de autos paga a los vendedores un sueldo fijo de $5000 más
      $700 de premio por cada auto vendido. Hacer un programa que permita
      ingresar por teclado la cantidad de autos vendidos por un vendedor y luego
      informar por pantalla el sueldo total a pagar.
      Ejemplo. Si la cantidad de autos vendidos fuera 4 entonces el sueldo total a
      pagar es de $7800.
    */

    int autos_vendidos, premio, sueldo_total;

    cout << "Ingrese la cantidad de autos vendidos por el trabajor: ";
    cin >> autos_vendidos;
    premio = 700 * autos_vendidos;
    sueldo_total = 5000 + premio;
    cout << endl;
    cout << "El sueldo total a pagar del trabajor es de :$" << sueldo_total << endl;

    return 0;
}

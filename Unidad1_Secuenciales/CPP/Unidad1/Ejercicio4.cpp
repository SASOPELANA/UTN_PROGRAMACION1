#include <iostream>
using namespace std;

int main()
{
    /**
    4 Hacer un programa para ingresar por teclado la cantidad de asientos totales en
      un avión y la cantidad de pasajes ocupados y luego calcular e informar el
      porcentaje de ocupación y el porcentaje de no ocupación del mismo.
      Ejemplo si el avión tiene 200 asientos totales y se vendieron 80 pasajes, el
      porcentaje de ocupación que se informará será de un 40% y el porcentaje de no
      ocupación será de un 60%.
    */

    int asientos_totales, pasajes_ocupados,porcentaje_ocupado, no_ocupado;

    cout << "Diguite la cantidad de asientos totales de un avion: ";
    cin >> asientos_totales;
    cout << "Diguite la cantidad de pasajes ocupados: ";
    cin >> pasajes_ocupados;
    porcentaje_ocupado = pasajes_ocupados * 100 / asientos_totales;
    no_ocupado = 100 - porcentaje_ocupado;
    cout << endl;
    cout << "El porcentaje de asientos ocuapdos es: " << porcentaje_ocupado << "%" << endl;
    cout << "El porcentaje de asientos no ocupados es: " << no_ocupado << "%" << endl;

    return 0;
}

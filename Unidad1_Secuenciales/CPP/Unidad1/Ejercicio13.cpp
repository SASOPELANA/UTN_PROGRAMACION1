#include <iostream>
using namespace std;

int main()
{
    /*
    13 Hacer un programa para un cajero automático para ingresar un importe a retirar y convertir el mismo en la cantidad de billetes de $1.000, $500, $200 y $100 a entregar.
       Ejemplo A: Si el importe a retirar es $2500 se mostrará por pantalla que se deberán entregar 2 billetes de $1.000, 1 billete de $500,  0 billetes de $200 y 0 billetes de $100.
       Ejemplo B: Si el importe a retirar es $3400 se mostrará por pantalla que se deberán entregar 3 billetes de $1.000, 2 billetes de $200, 0 billetes de $500 y 0 billetes de $100.
       Ejemplo C: Si el importe a retirar es $300 se mostrará por pantalla que se deberán entregar 1 billete de $200, 1 billete de $100, 0 billetes de $1.000 y 0 billetes de $500.
       Recordatorio. Considerar en todos los casos que el importe a retirar es en todos los casos múltiplo de $100 ya que el cajero no cuenta con billetes de $50, $20 o $10.
    */

    int ingreso, billete1000, billete500, billete200, billete100, resto1000, resto500, resto200, resto100;

    cout << "Ingrese la cantidad de billetes a retirar (Multiplo de 100): " << endl;
    cin >> ingreso;
    cout << endl;

    billete1000 = ingreso / 1000;
    resto1000 = ingreso % 1000;
    billete500 = resto1000 / 500;
    resto500 = resto1000 % 500;
    billete200 = resto500 / 200;
    resto200 = resto500 % 200;
    billete100 = resto200 / 100;
    resto100 = resto200 % 100;

    cout << "El importe a retirar es: $" << ingreso << ". Se entregan " << billete1000 << " --> billetes de $ 1000, " << billete500 << " --> billetes de $500, " << billete200 << " --> billetes de $200, " << billete100 << " --> billetes de $100." << endl;

    return 0;
}

#include <iostream>
using namespace std;

int main(){
    /*
    24 Hacer un programa que permita ingresar el sueldo de 10 empleados y determine:
       El sueldo máximo.
       El sueldo mínimo.
       El sueldo promedio.
       Cantidad de sueldos mayores a $50000.
    */

    int sueldo, sueldo_maximo, sueldo_minimo, mayor_cin = 0, acu_sueldo = 0;
    float promedio;

    for (int x = 0; x < 10; x++)
    {
        cout << "Proporcione los sueldos de los empleados: " << endl;
        cin >> sueldo;

        acu_sueldo += sueldo;

        if (x == 0){
            sueldo_maximo = sueldo;
            sueldo_minimo = sueldo;
        }else{
            if (sueldo > sueldo_maximo){
                sueldo_maximo = sueldo;
            }else if (sueldo < sueldo_minimo){
                sueldo_minimo = sueldo;
            }
        }

        if (sueldo > 50000){
            mayor_cin++;
        }
    }

    promedio = acu_sueldo / 10;

    cout << "Sueldo máximo: $" << sueldo_maximo << endl;
    cout << "Sueldo mínimo: $" << sueldo_minimo << endl;
    cout << "Sueldo promedio: $" << promedio << endl;
    cout << "Cantidad de sueldos mayores a $50000: " << mayor_cin << endl;

    return 0;
}
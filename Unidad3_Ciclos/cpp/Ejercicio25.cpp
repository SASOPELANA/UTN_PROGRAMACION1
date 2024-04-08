#include <iostream>
using namespace std;

int main(){
    /**
    25 Hacer un programa que permita ingresar el legajo y sueldo de 10 empleados y determine:
       El legajo del empleado con mayor sueldo
    */

    int legajo, sueldo, sueldo_mayor, legajo_mayor;

    cout << "Ingrese el sueldo de los empleados: " << endl;
    cin >> sueldo_mayor;
    cout << "Ingrese el legajo de los empleados: " << endl;
    cin >> legajo_mayor;

    for (int x = 0; x < 9; x++)
    {
        cout << "Ingrese el sueldo de los empleados: " << endl;
        cin >> sueldo;
        cout << "Ingrese el legajo de los empleados: " << endl;
        cin >> legajo;

        if (sueldo > sueldo_mayor){
            sueldo_mayor = sueldo;
            legajo_mayor = legajo;
        }

    }

    cout << "El sueldo mayor es: $" << sueldo_mayor << endl;
    cout << "El legajo del empleado: " << legajo_mayor << endl;

    return 0;
}
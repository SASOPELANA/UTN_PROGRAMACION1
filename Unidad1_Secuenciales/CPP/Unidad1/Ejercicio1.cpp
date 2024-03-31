#include <iostream>
using namespace std;

int main()
{
    /*
    1 Hacer un programa para ingresar por teclado la cantidad de horas trabajadas
      por un operario y el valor que se le paga por hora trabajada y listar por pantalla
      el sueldo que le corresponda.
    */

    int horas_trabajo, valor_trabajo;
    float sueldo;

    cout << "Ingrese las horas de trabajo: ";
    cin >> horas_trabajo;
    cout << "Ingrese el valor por hora de trabajo: ";
    cin >> valor_trabajo;
    sueldo = valor_trabajo * horas_trabajo;
    cout << endl;
    cout << "El sueldo a pagar es de : $" << sueldo;

    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    /**
    2 Hacer un programa que solicite por teclado que se ingresen dos números y
      luego guardarlos en dos variables distintas. A continuación se deben
      intercambiar mutuamente los valores en ambas variables y mostrarlos por
      pantalla.
      Ejemplo: Suponiendo que se ingresan 3 y 8 como valores y que la variables
      usadas son A y B, entonces A=3 y B=8, pero luego debe quedar A=8 y B=3.
    */

    int A, B, C;

    cout << "Ingrese el valor de la variable A: ";
    cin >> A;
    cout << "Ingrese el valor de la variable B: ";
    cin >> B;
    C = A;
    A = B;
    B = C;
    cout << endl;
    cout << "El valor de la variable A es: " << A << endl;
    cout << "El valor de la variable B es: " << B << endl;

    return 0;
}

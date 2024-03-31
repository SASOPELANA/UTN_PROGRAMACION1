#include <iostream>
using namespace std;

int main()
{
    /**
    8 Basado en los 2 ejercicios anteriores, hacer un programa para ingresar por teclado la longitud de los tres lados de un triángulo y luego listar qué tipo de triángulo es: 
      - Equilátero: si los tres lados son iguales.
      - Isósceles: si dos de los tres lados son iguales.
      - Escaleno: si los tres lados son distintos entre sí.
    */

   int lado1, lado2, lado3;

   cout << "Ingrese la longitud de tres lados de un triangulo: " << endl;
   cout << "Lado 1: ";
   cin >> lado1;
   cout << "Lado 2: ";
   cin >> lado2;
   cout << "Lado 3: ";
   cin >> lado3;
   cout << endl;

    if (lado1 == lado2 && lado2 == lado3)
    {
        cout << "Equilatero: los tres lados son iguales." << endl;
    }else if (lado1 == lado3 || lado2 == lado3|| lado1 == lado2)
    {
        cout << "Isosceles: dos lados son iguales." << endl;
    }else
    {
        cout << "Escaleno: los tres lados son distintos entre si." << endl;
    }
    
    cout << endl << "--Fin del programa--" << endl;

    return 0;
}
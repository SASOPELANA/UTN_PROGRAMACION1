#include <iostream>
using namespace std;

int main()
{
    /**
    3 Hacer un programa para ingresar por teclado un número y luego informar por
      pantalla con un cartel aclaratorio si el mismo es par o impar.
    */

   int numero;

   cout << "Diguite un numero: ";
   cin >> numero;

   if (numero % 2 == 0)
    {
        cout << "El numero " << numero << " es par." << endl;
    }else
    {
        cout << "El numero " << numero << " es impar." << endl;
    }

    cout << endl << "--Fin del programa--" << endl;

    return 0;
}
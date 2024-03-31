#include <iostream>
using namespace std;

int main()
{
    /**
    2 Hacer un programa para ingresar por teclado dos números y luego informar por
      pantalla con un cartel aclaratorio si el primer número es múltiplo del segundo. 
    */

   int num1, num2;

   cout << "Proporcione un numero: ";
   cin >> num1;
   cout << "Proporcione otro numero: ";
   cin >> num2;

    if (num2 != 0)
    {
        if (num1 % num2 == 0)
        {
            cout << "El numero " << num1 << " es multiplo de " << num2 << "." << endl;
        }
    }
    cout << endl << "--Fin del programa--" << endl;

    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    /**
    6 Hacer un programa para ingresar por teclado tres números y luego determinar e informar con una leyenda aclaratoria si los tres son iguales entre sí, 
      caso contrario no emitir nada.
      Tener en cuenta:  Si A es igual a B y B es igual a C, entonces A y C son iguales.
    */

   int num1, num2, num3;
    
    cout << "Diguite un numero: ";
    cin >> num1;
    cout << "Diguite otro numero: ";
    cin >> num2;
    cout << "Diguite un tercer numero: ";
    cin >> num3;
    cout << endl;

    if (num1 == num2 && num2 == num3)
    {
        cout << "Los numeros son iguales." << endl;
    }

    cout << endl << "--Fin del programa--" << endl;

    return 0;
}
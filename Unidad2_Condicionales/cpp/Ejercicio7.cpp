#include <iostream>
using namespace std;

int main()
{
    /**
    7 Hacer un programa para ingresar por teclado tres números e informar con una leyenda aclaratoria si los tres son todos distintos entre sí, caso contrario no emitir nada. 
      Tener en cuenta: Si A es distinto de B y B es distinto de C, eso no significa que A y C sean distintos. Ejemplo: A=8, B=6 y C=8.
    */

   int num1, num2, num3;
    
    cout << "Diguite un numero: ";
    cin >> num1;
    cout << "Diguite otro numero: ";
    cin >> num2;
    cout << "Diguite un tercer numero: ";
    cin >> num3;
    cout << endl;

    if (num1 != num2 && num2 != num3 && num1 != num3)
    {
        cout << "Los numeros son distintos." << endl;
    }

    cout << endl << "--Fin del programa--" << endl;

    return 0;
}
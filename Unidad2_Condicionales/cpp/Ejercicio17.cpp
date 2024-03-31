#include <iostream>
using namespace std;

int main()
{
    /*
    17 Hacer un programa para ingresar por teclado cuatro números. Si los valores que
       se ingresaran están ordenados en forma creciente, emitir el mensaje “Conjunto
       Ordenado”, caso contrario emitir el mensaje: “Conjunto Desordenado”.
       Ejemplo A: si los números que se ingresan son 8, 10, 12 y 14, entonces están
       ordenados.
       Ejemplo B: si los números que se ingresan son 8, 12, 12 y 14, entonces están
       ordenados.
       Ejemplo C: si los números que se ingresan son 10, 8, 12 y 14, entonces están
       desordenados.
    */

    int num1, num2, num3, num4;

    cout << "Ingrese 4 numeros: " << endl;
    cin >> num1;
    cin >> num2;
    cin >> num3;
    cin >> num4;
    cout << endl;

    if (num1 <= num2 && num2 <= num3 && num3 <= num4)
    {
        cout << "Conjunto Ordenado." << endl;
    }else
    {
        cout << "Conjunto Desordenado." << endl;
    }

    cout << endl << "--Fin del programa--" << endl;

    return 0;
}
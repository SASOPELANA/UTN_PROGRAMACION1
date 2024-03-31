#include <iostream>
using namespace std;

int main()
{
    /*
    4 Hacer un programa para ingresar por teclado dos números y luego informar por pantalla la diferencia absoluta entre ambos. 
      Ejemplo A: Si se ingresan 3 y 8 se emite 5. Si se ingresan 8 y 3 se emite 5. Ejemplo B: Si se ingresan -3 y 9 se emite 12. Si se ingresan -12 y -1 se emite 11.
      Ejemplo C: Si se ingresan -3 y -9 se emite 6. Si se ingresan -12 y -9 se emite 3.
      Importante: Verifique que el programa emite SIEMPRE UN VALOR POSITIVO porque la diferencia absoluta siempre es un valor positivo.
    */

    int num1, num2, diferencia;

    cout << "Ingrese un numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;
    cout << endl;

    if (num1 > num2)
    {
        diferencia = num1 - num2;
        cout << "La direncia absoluta es: " << diferencia << endl;
    }else
    {
        diferencia = num2 - num1;
        cout << "La direncia absoluta es: " << diferencia << endl;
    }

    cout << endl << "--Fin del programa--" << endl;

    return 0;
}
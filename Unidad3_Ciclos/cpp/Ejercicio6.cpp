#include <iostream>
using namespace std;

int main(){
    /*
    6 Hacer un programa para ingresar un N valor que indica la cantidad de números
      que componen una lista y luego solicitar se ingresen esos N números. Se pide
      informar cuantos son positivos
      Ejemplo A: Se ingresa como N el valor 5, y luego se ingresa: 10, -3, 2, 5, 4. Se
      listará: Cantidad de Positivos: 4
      Ejemplo B: Se ingresa como N el valor 6, y luego se ingresa: -10, -3, -2, 0, -5, -4.
      Se listará: Cantidad de Positivos: 0
    */

    int num, numeros, can_positivos = 0;

    cout << "Proporcione el valor de la lista: " << endl;
    cin >> num;
    cout << endl;

    for (int x = 0; x < num; x++){
        cout << "Diguite numeros: " << endl;
        cin >> numeros;

        if (numeros > 0)
        {
            can_positivos++;
        }
        
    }

    cout << "Cantidad de números positivos: " << can_positivos << endl;

    return 0;
}
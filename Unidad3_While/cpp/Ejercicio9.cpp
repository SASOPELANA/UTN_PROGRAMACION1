#include <iostream>
using namespace std;

int main(){
    /*
    9 Hacer un programa para ingresar una lista de números que finaliza cuando se ingresa un cero, luego informar el máximo de los pares.
      Ejemplo A: 2, 10, 20, 8, 25, 13, 36, -8, -5, 20, 0. Se listará Máximo 36.
      Ejemplo B: 5, -13, 23, 81, -55, -13, 55, 4, 15, -20, 0. Se listará Máximo 4.
      Ejemplo C: -5, -13, -20, -8, -55, -13, -55, -14, -15, -20, 0. Se listará Máximo -8.
    */

    int num, maximo_pares;
    bool bandera = true;

    cout << "Digite números o cero (0) para finalizar: " << endl;
    cin >> num;

    while (num != 0)
    {
        if(num % 2 == 0){
            if(bandera){
                maximo_pares = num;
                bandera = false;
            }else if(num > maximo_pares){
                maximo_pares  = num;
            }
        }
        cout << "Digite números o cero (0) para finalizar: " << endl;
        cin >> num;
    }
    
    if (!bandera){
        cout << "El Máximo par es: " << maximo_pares << endl;
    }

    return 0;
}
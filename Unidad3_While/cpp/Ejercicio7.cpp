#include <iostream>
using namespace std;

int main(){
    /*
    7 Hacer un programa para ingresar una lista de números que finaliza cuando se ingresa un cero, luego informar el máximo.
      Ejemplo A: 5, 10, 20, 8, 25, 13, 35, -8, -5, 20, 0. Se listará Máximo 35.
      Ejemplo B: 5, 10, 20, 8, 55, 13, 55, -8, -5, 20, 0. Se listará Máximo 55.
      Ejemplo C: -15, -10, -20, -8, -55, -13, -55, -8, -5, -20, 0. Se listará Máximo -5.
    */

    int num, maximo = 0;
    bool bandera = true;

    cout << "Digite números o cero (0) para finalizar: " << endl;
    cin >> num;

    while (num != 0)
    {
        if (bandera){
            maximo = num;
            bandera = false;
        }else if (num > maximo){
            maximo = num;
        }
        cout << "Digite números o cero (0) para finalizar: " << endl;
        cin >> num;
    }
    
    cout << "El Máximo es: " << maximo << endl;

    return 0;
}
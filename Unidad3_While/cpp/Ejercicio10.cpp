#include <iostream>
using namespace std;

int main(){
    /*
    10 Hacer un programa para ingresar una lista de números que finaliza cuando se ingresa un cero, luego informar el máximo y el mínimo.
       Ejemplo A: 10, 20, -5, 30,-15, 5, 42, 2, 22, -13, 0. Se listará Máximo 42 Mínimo -15.
       Ejemplo B: 10, 20, 5, 30, 15, 5, 42, 8, 22, 13, 0. Se listará Máximo 42 Mínimo 5.
       Ejemplo C: -10, -20, -5, -30, -15, -12, -42, -8, -22, -13, 0. Se listará Máximo -5 Mínimo -42.
       Observe que los ejemplos B y C dejan en claro que la suposición de que el máximo “seguramente” es un positivo y el mínimo “seguramente” es un negativo, es incorrecta.
    */

    int num, maximo, minimo;
    bool bandera = true;

    cout << "Diguite números o cero (0) para finalizar: " << endl;
    cin >> num;

    while (num != 0)
    {
        if (bandera){
            maximo = num;
            minimo = num;
            bandera = false;
        }else if (num > maximo){
            maximo = num;  
        }else {
             if (num < minimo){
                minimo = num;
            }
        }
        cout << "Diguite números o cero (0) para finalizar: " << endl;
        cin >> num;
    }
    
    cout << "Máximo: " << maximo << " Mínimo: " << minimo << endl;

    return 0;
}
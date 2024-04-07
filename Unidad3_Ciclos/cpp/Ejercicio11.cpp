#include <iostream>
using namespace std;

int main(){
    /*
    11 Hacer un programa para ingresar una lista de 10 números, luego informar el máximo y el mínimo.
       Ejemplo A: 10, 20, -5, 30,-15, 5, 42, 0, 22, -13. Se listará Máximo 42 Mínimo -15.
       Ejemplo B: 10, 20, 5, 30, 15, 5, 42, 8, 22, 13. Se listará Máximo 42 Mínimo 5.
       Ejemplo C: -10, -20, -5, -30, -15, -12, -42, -8, -22, -13. Se listará Máximo -5 Mínimo -42.
       Observe que los tres ejemplos dejan en claro que la suposición de que el máximo “seguramente” es un positivo y el mínimo “seguramente” es un negativo, 
       queda totalmente descartada.
    */

    int num, maximo, minimo;

    for (int x = 0; x < 10; x++){
        cout << "Diguite números: " << endl;
        cin >> num;

        if (x == 0){
            maximo = num;
        }else if (num > maximo){
            maximo = num;
        }
        if (x == 0){
            minimo = num;
        }else if (num < minimo){
            minimo = num;
        }

    }

    cout << "El número máximo es " << maximo << " y el mínimo es " << minimo << endl;

    return 0;
}
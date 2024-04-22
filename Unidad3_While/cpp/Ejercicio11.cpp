#include <iostream>
using namespace std;

int main(){
    /**
    11 Hacer un programa para ingresar una lista de números que finaliza cuando se ingresa un cero, informar el máximo de los negativos y el mínimo de los positivos.
       Ejemplo: 5, 8, 12, 2, -10, 15, -20, 8, -3, 24, 0.
       Máximo Negativo: -3.
       Mínimo Positivo: 2.
    */

    int num, maximo_negativos, minimo_positivos;
    bool bandera1 = true, bandera2 = true;

    cout << "Ingrese una lista de números o cero (0) para finalizar: " << endl;
    cin >> num;

    while (num != 0)
    {
        if (num < 0){
            if (bandera1){
                maximo_negativos = num;
                bandera1 = false;
            }else if (num > maximo_negativos){
                maximo_negativos = num;
            }
        }else if (num > 0){
            if (bandera2){
                minimo_positivos = num;
                bandera2 = false;
            }else if (num < minimo_positivos){
                minimo_positivos = num;
            }
        }
        cout << "Ingrese una lista de números o cero (0) para finalizar: " << endl;
        cin >> num;
    }
    
    if (!bandera1){
        cout << "Máximo Negativo: " << maximo_negativos << endl;
    }
    if (!bandera2){
        cout << "Mínimo Positivo: " << minimo_positivos << endl;
    }
    
    return 0;
}
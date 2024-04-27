#include <iostream>
using namespace std;

int main(){
    /*
    14 Hacer un programa para ingresar una lista de números que finaliza cuando se ingresa un cero, informar si todos están ordenados en forma creciente. 
       En caso de haber dos números “empatados” considerarlos como crecientes. Por ejemplo si la lista fuera:
       Ejemplo 1: -10, 1, 5, 7, 15, 18, 20, 23, 0 se emitirá un cartel: “Conjunto Ordenado”
       Ejemplo 2: 10, 10, 15, 20, 25, 25, 28, 33, 0 se emitirá un cartel: “Conjunto Ordenado”
       Ejemplo 3: 10, 1, 15, 7, -15, 18, 20, 23, 0 se emitirá un cartel: “Conjunto No Ordenado”
    */

    int num, anterior = 0;
    bool ordenado = true, bandera = true;

    cout << "Proporcione una lista de número o cero (0) para finalizar: " << endl;
    cin >> num;

    while (num != 0 )
    {
        if (bandera){
            anterior = num;
            bandera = false;
        }else if (num >= anterior){
            anterior = num;
        }else{
            ordenado = false;
        }
        cout << "Proporcione una lista de número o cero (0) para finalizar: " << endl;
        cin >> num;
    }
    
    if (ordenado){
        cout << "Conjunto Ordenado." << endl;
    }else{
        cout << "Conjunto No Ordenado." << endl;
    }

    return 0;
}
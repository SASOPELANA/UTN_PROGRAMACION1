#include <iostream>
using namespace std;

int main(){
    /**
    15 Hacer un programa para ingresar una lista de números que finaliza cuando se ingresa un cero, informar los 2 mayores valores ingresados, aclarando cual es el
       máximo y cuál el que le sigue.
       Ejemplo: 10, 8, 12, 14, 3, 0 el resultado será 14 y 12.
       Ejemplo: 14, 8, 12, 14, 3, 0 el resultado será 14 y 14.
       Ejemplo: -4, -8, -12, -20, -2, 0 el resultado será -2 y -4
    */

    int num, maximo = 0, segundo_maximo = 0;
    bool bandera = true;

    cout << "Proporcione una lista de números o cero (0) para finalizar: " << endl;
    cin >> num;

    while (num != 0)
    {
        if (bandera){
            maximo = num;
            bandera = false;
        }else if(num >= maximo){
            segundo_maximo = maximo;
            maximo = num;
        }
        cout << "Proporcione una lista de números o cero (0) para finalizar: " << endl;
        cin >> num;
    }
    
    if (maximo != 0){
        cout << "El Máximo es: " << maximo << "." << endl;
        if (segundo_maximo != 0){
            cout << "El Segundo Máximo es: " << segundo_maximo << "." << endl;
        }
    }
    
    return 0;
}
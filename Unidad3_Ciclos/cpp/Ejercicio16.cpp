#include <iostream>
using namespace std;

int main(){
    /*
    16 Hacer un programa para ingresar 5 números, luego informar los 2 mayores valores ingresados, aclarando cual es el máximo y cuál el que le sigue. 
       Ejemplo A: 10, 8, 12, 14, 3 el resultado será 14 y 12. 
       Ejemplo B: 14, 8, 12, 14 ,3 el resultado será 14 y 14.
       Ejemplo C: -4, -8, -12, -20, -2 el resultado será -2 y -4
       Ejemplo D: 100, 20, 5, - 15, 70, el resultado será 100 y 70. 

       Se recomienda probar el diagrama que vaya a desarrollar con todos los ejemplos, en particular el Ejemplo D, en el cual el máximo de la lista aparece en el primer lugar
       y que si no se tiene precaución puede llevar a resultados como 100 como máximo y 100 como segundo máximo.
       ¡ESO ES INCORRECTO! El resultado debe ser 100 y 70.
    */

    int num, anterior, maximo, segundo_maximo;

    cout << "Diguite numeros: " << endl;
    cin >> anterior;
    
    cout << "Diguite numeros: " << endl;
    cin >> num;

    if (num > anterior){
        maximo = num;
        segundo_maximo = anterior;
    }else {
        maximo = anterior;
        segundo_maximo = num;
    }

    for (int x = 0; x < 3; x++)
    {
        cout << "Diguite numeros: " << endl;
        cin >> num;

        if (num > maximo){
            segundo_maximo = maximo;
            maximo = num;
        }else if (num > segundo_maximo){
            segundo_maximo = num;
       }

    }

    cout << "Máximo: " << maximo << " -> Segundo Máximo: "<< segundo_maximo << endl;

    return 0;
}
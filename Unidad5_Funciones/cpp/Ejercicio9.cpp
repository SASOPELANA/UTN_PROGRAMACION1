/*
    9 Escribir una función que reciba un número y retorne 1 si el número recibido es perfecto y 0 si no es perfecto.
    Hacer un programa para que, dada una lista de números que finaliza con cero, informe cuántos de ellos eran perfectos. Utilizar la función solicitada.
*/
#include <iostream>
using namespace std;

bool NumeroPerfecto(int n1){
    bool prefecto = false;
    int acu_divisible = 0, x = 0;

    for (x = 1; x < n1; x++)
    {
        if (n1 % x == 0){
            acu_divisible += x;
        }
    }
    if (acu_divisible == n1){
        prefecto = true;
    }
    return prefecto;
}

int main(){

    int num, con_perfecto = 0;

    cout << "Ingrese un numero: " << endl;
    cin >> num;
    while (num != 0)
    {
        if (NumeroPerfecto(num)){
            con_perfecto++;
        }

        cout << "Ingrese un numero: " << endl;
        cin >> num;
    }
    
    if (con_perfecto > 0){
        cout << "Cantidad de numeros perfectos ingresados: " << con_perfecto << endl;
    }else{
        cout << "No se ingresaron numeros perfectos. " << endl;
    }

    return 0;
}
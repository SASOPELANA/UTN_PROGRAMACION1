/*
    1 Hacer un programa para ingresar una lista de 10 números y luego informar cuántos de los números ingresados son perfectos. 
    Se informa 1 resultado al final.
*/
#include <iostream>
using namespace std;

int main(){

    int num, x = 0, i = 0, acu_divisible = 0, num_perfecto = 0;

    for ( x = 0; x < 10; x++)
    {
        cout << "Diguite numeros: " << endl;
        cin >> num;

        acu_divisible = 0;
        for (i = 1; i < num; i++)
        {
            if (num % i == 0){
                acu_divisible += i;
            }
        }
        if (acu_divisible == num){
            num_perfecto++;
        }  
    }
    
    cout << "Los numeros perfectos que se ingresaron son: " << num_perfecto << endl;

    return 0;
}
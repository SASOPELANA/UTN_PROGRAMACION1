#include <iostream>
using namespace std;

int main(){
    /*
    6 Hacer un programa para ingresar una lista de números que finaliza cuando se ingresa un cero, luego informar cuántos son positivos y cuántos son negativos.
      Ejemplo: 4, -3, 8, -5, 18, 20, 0. Se listará Positivos: 4 Negativos: 2.
      Para resolver este ejercicio sugerimos resolver antes el TP3 EJ 7.
    */

    int num, positivo = 0, negativo = 0;

    cout << "Diguite numeros: " << endl;
    cin >> num;

    while (num != 0)
    { 
        if (num > 0){
            positivo++;
        }else if (num < 0){
            negativo++;
        }
        cout << "Diguite numeros o cero (0) para finalizar: " << endl;
        cin >> num; 
    }

    cout << "Positivos: " << positivo << " Negativos: " << negativo << endl;
    
    return 0;
}
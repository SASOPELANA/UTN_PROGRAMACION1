#include <iostream>
using namespace std;

int main(){
    /**
    7 Hacer un programa para ingresar una lista de 10 números, luego informar cuántos son positivos, cuántos son negativos, y cuántos iguales a cero.
      Para resolver este ejercicio sugerimos resolver antes el TP2 EJ 11.
    */

    int num, positivos = 0, negativos = 0, iguales_cero;

    for (int x = 0; x < 10; x++)
    {
        cout << "Diguite números: " << endl;
        cin >> num;

        if (num > 0){
            positivos++;     
        }else if (num == 0){
            iguales_cero++;
        }else{
            negativos++;
        }

    }
    
    cout << "Positivos: " << positivos << " -> Negativos: " << negativos << " -> Iguales a cero: " << iguales_cero << endl;

    return 0;
}
/*
    3 Leer 10 números y guardarlos en un vector. Determinar e informar cuál es el valor máximo y su posición dentro del vector.
*/
#include <iostream>
using namespace std;

int main(){

    int vector[10];
    int num, maximo = 0, posicion = 0, x = 0;

    for (x = 0; x < 10; x++)
    {
        cout << "Ingrese números: " ;
        cin >> num;
        vector[x] = num;
    }
    
    maximo = vector[0];
    posicion = 1;
    for (x = 0; x < 10; x++)
    {
        if(vector[x] > maximo){
            maximo = vector[x];
            posicion = x + 1;
        }
    }
    
    cout << endl;
    cout << "Máximo: " << maximo << endl;
    cout << "Posición: " << posicion << endl;

    return 0;
}

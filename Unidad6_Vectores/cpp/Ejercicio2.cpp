/*
    2 Leer 10 números y guardarlos en un vector. Calcular el promedio y luego
    mostrar por pantalla los valores que son mayores al promedio.
*/
#include <iostream>
using namespace std;

int main(){

    int vector[10];
    int num, x = 0, acu = 0;
    float promedio;

    for (x = 0; x < 10; x++)
    {
        cout << "Ingrese 10 números: ";
        cin >> num;
        vector[x] = num;
    }
    
    for (x = 0; x < 10; x++)
    {
        acu += vector[x];
    }

    promedio = (float)acu / 10;

    for (x = 0; x < 10; x++)
    {
        if (vector[x] > promedio){
            cout << "Valores mayor al promedio: " << vector[x] << endl;
        }
    }

    return 0;
}
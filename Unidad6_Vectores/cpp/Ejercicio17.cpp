/*
    17 Dada una lista de 10 números, cargarlos en un vector. Luego detectar si en el vector hay elementos repetidos 
    y generar otro vector con los elementos repetidos reemplazados por ceros.
    Ejemplo Vector 1: [8, 20, 20, -7, 15, 12, 15, -5, 11, 18]
    Ejemplo Vector 2: [8, 0, 0, -7, 0, 12, 0, -5, 11, 18]
*/
#include <iostream>
using namespace std;

int main(){

    int vector[10], vecRepetido[10];
    int num, x = 0, i = 0;

    for (x = 0; x < 10; x++)
    {
        cout << "Ingrese un número: ";
        cin >> num;
        vector[x] = num;
        vecRepetido[x] = num;
    }
    
    for (x = 0; x < 10; x++)
    {
        for (i = 0; i < 10; i++)
        {
            if(x != i && vector[x] == vector[i]){
                vecRepetido[x] = 0;
            }

        }   
    }

    cout << endl;
    for (x = 0; x < 10; x++)
    {
        if(x < 9){
            cout << vector[x] << ", ";
        }else if(x == 9){
            cout << vector[x] << ". ";
        } 
    }
    cout << endl;
    for (x = 0; x < 10; x++)
    {
        if(x < 9){
            cout << vecRepetido[x] << ", ";
        }else if(x == 9){
            cout << vecRepetido[x] << ". ";
        }
    }

    cout << endl;
    
    return 0;
}
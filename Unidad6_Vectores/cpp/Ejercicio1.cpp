/*
    1 Hacer un programa para ingresar 10 números y guardarlos en un vector.
    Determinar e informar cuál es la suma de los valores del vector
*/
#include <iostream>
using namespace std;

int main(){

    int Mi_vector[10];

    int num, suma = 0, x = 0;
    int acu = 0;

    for (x = 0; x < 10; x++)
    {
        cout << "Ingrese un número: " << endl;
        cin >> num;
        suma += Mi_vector[x]= num; 
        acu += num;
    }
    
    cout << "La suma del Vector: " << suma << endl;
    cout << "Suma de acumulador: " << acu << endl;

    return 0;
}
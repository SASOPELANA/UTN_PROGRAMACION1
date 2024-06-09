/*
    12 Dada una lista de 10 n£meros, cargarlos en un vector. Luego ingresar un n£mero e informar la cantidad de veces que ese n£mero aparece en el vector.
*/
#include <iostream>
using namespace std;

int main(){

    int vector[10];
    int num, numero = 0, x = 0;
    int con_repetido = 0;

    for (x = 0; x < 10; x++)
    {
        cout << "Ingrese un n£mero: ";
        cin >> num;
        vector[x] = num;
    }

    cout << endl;
    cout << "Ingrese un n£mero para informar la cantidad de veces que aparece en el vector: " << endl; 
    cin >> numero;

    for (x = 0; x < 10; x++)
    {
        if(numero == vector[x]){
            con_repetido++;
        }
    }

    cout << endl;
    if (con_repetido > 0){
        cout << "Cantidad de veces que el N£mero " << numero << " , aparece en el Vector: " << con_repetido << endl;
    }else{
        cout << "El N£mero " << numero << ", no aparce en el Vector. " << endl;
    }

    return 0;
}
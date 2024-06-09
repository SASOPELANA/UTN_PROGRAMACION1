/*
    11 Dada una lista de 10 n£meros, cargarlos en un vector. Luego ingresar un n£mero e informar el primer ¡ndice donde ese n£mero aparece en el vector. 
    En caso de no aparecer se mostrar  el valor ¡ndice igual a -1.
*/
#include <iostream>
using namespace std;

int main(){

    int vector[10];
    int num, x = 0, numero = 0;
    int indice = 0, con = 0;

    for (x = 0; x < 10; x++)
    {
        cout << "Ingrese un n£mero: ";
        cin >> num;
        vector[x] = num;
    }

    cout << endl;
    cout << "Ingrese un n£mero para informar si aparece en el vector: ";
    cin >> numero;

    for (x = 0; x < 10; x++)
    {
        if (numero == vector[x]){
            con++;
            if (con == 1)
            {
                indice = x;
            }
        }else{
            if (con == 0){
                indice = -1;
            }
        }
    }

    cout << endl;
    if (con == 0){
        cout << "Valor del indice: " << indice << endl;
    }else{
        cout << "El n£mero " << numero << " , aparace en el indice " << indice << " del Vector. " << endl;
    }

    return 0;
}
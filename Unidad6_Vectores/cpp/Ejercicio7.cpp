/*
    7 Hacer un programa para llenar un vector de 10 elementos con el formato: 1, 0, 1, 0, 1, 0, 1, 0, 1, 0. 
    Luego mostrar los n£meros por pantalla. EL USUARIO NO INGRESA NINGÈN VALOR EN ESTE PROGRAMA.
*/
#include <iostream>
using namespace std;

int main(){

    int vector[10];
    int par = 0, impar = 0, x = 0;

    for (x = 0; x < 10; x++)
    {
        if(x % 2 == 0){
            vector[x] = 1;
        }else{
            vector[x] = 0;
        }
    }

    for (x = 0; x < 10; x++)
    {
        cout << vector[x];
        if(x < 9){
            cout << ", ";
        }else if(x == 9){
            cout << ". " << endl;
        }
    }
    
    return 0;
}
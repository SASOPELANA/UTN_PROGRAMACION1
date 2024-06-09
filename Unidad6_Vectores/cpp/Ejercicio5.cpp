/*
    5 Leer 10 números y guardarlos en un vector. Determinar e informar cuál es el menor de los impares y el mayor de los pares. 
    Suponer que habrá al menos un número par y uno impar.
*/
#include <iostream>
using namespace std;

int main(){

    int vector[10];
    int num, x = 0, menorImpar = 0, maxPar = 0;
    bool banderaPar = true, banderaImpar = true;

    for ( x = 0; x < 10; x++)
    {
        cout << "Ingrese números: " ;
        cin >> num;
        vector[x] = num;
    }
    
    for ( x = 0; x < 10; x++)
    {
        if(vector[x] % 2 == 0){
            if (banderaPar)
            {
               maxPar = vector[x];
               banderaPar = false; 
            }else if(vector[x] > maxPar){
                maxPar = vector[x];
            }
        }else{
            if (banderaImpar){
                menorImpar = vector[x];
                banderaImpar = false;
            }else if (vector[x] < menorImpar){
                menorImpar = vector[x];
            }
        }
    }

    cout << endl;
    if (!banderaPar){
        cout << "Máximo Par: " << maxPar << endl;
    }else{
        cout << "No se ingresaron números Pares." << endl;
    }
    if (!banderaImpar){
        cout << "Menor Impar: " << menorImpar << endl;
    }else{
        cout << "No se ingresaron números Impares." << endl;
    }
   
    return 0;
}
/*
    15 Dada una lista de 5 n£meros, cargarlos en un vector. Armar luego otro vector de 9 elementos donde por cada 2 elementos del vector original intercale el promedio de ellos. 
    Por ejemplo: [2, 4, 6, 8, 10],  el vector queda: [2, 3, 4, 5, 6, 7, 8, 9, 10].
*/
#include <iostream>
using namespace std;

int main(){

    int vector[5];
    int vecDos[9];
    int suma[4];
    int promedio[4];
    int num, x = 0;
    int con = 0;
    bool bandera = true;

    for (x = 0; x < 5; x++)
    {
        cout << "Ingrese un n£mero: ";
        cin >> num;
        vector[x] = num;
    }
    
    for (x = 0; x < 4; x++)
    {
        suma[x] = vector[x] + vector[x + 1];
    }

    for (x = 0; x < 4; x++)
    {
       promedio[x] = suma[x] / 2;
    }
    
    cout << endl;
    for (x = 0; x < 9; x++)
    {
        if (bandera)
        {
            vecDos[x] = vector[con];
            con++;
            bandera = false;
        }else{
            vecDos[x] = promedio[con - 1];
            bandera = true;
        }   
    }
    
    cout << endl;
    for (x = 0; x < 9; x++)
    {
        if (x < 8){
            cout << vecDos[x] << ", ";
        }else if (x == 8)
        {
            cout << vecDos[x] << ". ";
        }  
    }
    
    return 0;
}
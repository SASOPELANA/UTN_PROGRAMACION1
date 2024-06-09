/*
    10 Dada una lista de 20 n£meros, cargarlos en un vector. Determinar e informar la cantidad de ?rupturas? que tiene el vector con respecto a un orden estrictamente creciente. 
    Ejemplo: el vector 1,3,4,2,4,4,6,8,1,7,9 tiene 3 rupturas.
*/
#include <iostream>
using namespace std;

int main(){

    int vector[20];
    int num, x = 0, rupturas = 0;

    for (x = 0; x < 20; x++)
    {
        cout << "Digite n£meros: ";
        cin >> num;
        vector[x] = num;
    }
    
    for (x = 0; x < 19; x++)
    {
        if (vector[x] > vector[x + 1]){
            rupturas++;
        } 
    }

    cout << endl;
    if (rupturas > 0){
        cout << "Rupturas: " << rupturas + 1 << endl;
    }else{
        cout << "No hay rupturas. " << endl;
    }

    return 0;
}
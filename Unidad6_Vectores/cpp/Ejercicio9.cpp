/*
    9 Dada una lista de 20 n£meros enteros, cargarlos en un vector. Determinar e informar con un cartel aclaratorio si el vector est  ordenado estrictamente en forma creciente. 
    Por ejemplo: el vector [1, 3, 5, 7, 9] est  ordenado estrictamente. El vector [1,  5,  3,  7] no lo est .
*/

#include <iostream>
using namespace std;

int main(){

    int vector[20];
    int num, x = 0, max = 0;
    bool ordenados = true;

    for (x = 0; x < 20; x++)
    {
        cout << "Digite n£meros: ";
        cin >> num;
        vector[x] = num; 
    }

    max = vector[0];
    for (x = 0; x < 20; x++)
    {
        if(vector[x] >= max){
            max = vector[x];
        }else{
            ordenados = false;
        }
    }

    if (ordenados){
        cout << "Conjunto ordenados." << endl;
    }else{
        cout << "Conjunto No ordenados." << endl;
    }

    return 0;
}
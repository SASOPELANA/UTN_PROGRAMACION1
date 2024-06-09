/*
    13 Dada una lista de 10 n£meros, cargarlos en un vector. Luego contar y listar la cantidad de n£meros pares que aparecen en el vector.
*/
#include <iostream>
using namespace std;

bool ContarPar(int n1);

int main(){

    int vector[10];
    int num, con_par = 0, x = 0;

    for (x = 0; x < 10; x++)
    {
        cout << "Ingrese un n£mero: ";
        cin >> num;
        vector[x] = num;
    }

    for (x = 0; x < 10; x++)
    {
        if(ContarPar(vector[x])){
            con_par++;
        }
    }

    cout << endl;
    if (con_par > 0){
        cout << "Cantidad de n£meros pares en el vector: " << con_par << endl;
    }else{
        cout << "No se ingrsaron n£meros pares." << endl;
    }

    return 0;
}

bool ContarPar(int n1){
    bool par = false;
    if(n1 % 2 == 0){
        par = true;
    }
    return par;
}

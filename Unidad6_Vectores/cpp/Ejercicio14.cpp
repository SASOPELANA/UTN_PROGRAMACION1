/*
    14 Dada una lista de 10 n£meros, cargarlos en un vector. Luego contar y listar la cantidad de n£meros primos que aparecen en el vector.
*/
#include <iostream>
using namespace std;

bool EsPrimo(int n1);

int main(){

    int vector[10];
    int num, x = 0, conPrimos = 0;

    for (x = 0; x < 10; x++)
    {
        cout << "Ingrese un n£mero: ";
        cin >> num;
        vector[x] = num;
    }

    for (x = 0; x < 10; x++)
    {
       if (EsPrimo(vector[x])){
        conPrimos++;
       }
    }

    cout << endl;
    if (conPrimos > 0){
        cout << "Cantidad de n£meros primos en el vector: " << conPrimos << endl;
    }else{
        cout << "No se ingrsaron n£meros primos." << endl;
    }

    return 0;
}

bool EsPrimo(int n1){
    bool primo = false;
    int con = 0, x = 0;

    for (x = 1; x <= n1; x++)
    {
        if(n1 % x == 0){
            con++;
        }
    }
    if (con == 2)
    {
        primo = true;
    }
    return primo;
}
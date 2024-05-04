/*
    2 Hacer un programa para ingresar una lista de 10 n√∫meros y luego informar
    cu√°ntos de los n√∫meros ingresados son primos. Se informa 1 resultado al final.

*/
#include <iostream>
using namespace std;

int main(){

    int num, x = 0, i = 0;
    int con_primos = 0, total_primos = 0;

    for ( x = 0; x < 10; x++)
    {
        cout << "Diguite n£meros: " << endl;
        cin >> num;

        con_primos = 0;
        for ( i = 1; i <= num; i++)
        {
             if (num % i == 0){
                con_primos++;
             }
        }
        if (con_primos == 2){
            total_primos++;
        }
    }
    cout << endl;
    cout << "-------------------------------------------" << endl;
    if (total_primos > 0){
        cout << "Total de n£meros primos ingresados: " << total_primos << endl;
    }else {
        cout << "No se ingresaron n£meros primos." << endl;
    }
    

    return 0;
}
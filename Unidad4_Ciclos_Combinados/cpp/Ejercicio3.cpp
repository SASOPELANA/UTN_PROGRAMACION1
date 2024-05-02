/*
    3 Hacer un programa para ingresar una lista de n£meros que finaliza cuando se ingresa un cero y luego informar el porcentaje de n£meros primos y el
    porcentaje de n£meros no primos. Se informan 2 resultados al final.
*/
#include <iostream>
using namespace std;

int main(){

    int num, x = 0,con = 0;
    float por_primos = 0, por_no_primos = 0, total_numeros = 0, primos = 0, no_primos = 0;

    cout << "Diguite n£meros o cero (0) para finalizar: " << endl;
    cin >> num;

    while (num != 0)
    {
        total_numeros++;

        con = 0;
        for ( x = 1; x <= num; x++)
        {
            if (num % x == 0){
                con++;
            }
        }
        if (con == 2){
            primos++;
        }else{
            no_primos++;
        }
        cout << "Diguite n£meros o cero (0) para finalizar: " << endl;
        cin >> num;
    }
    
    por_primos = (primos / total_numeros) * 100;
    por_no_primos = (no_primos / total_numeros) * 100;

    if (por_primos > 0){
        cout << "El porcentaje de los n£meros primos: " << por_primos << endl;
    }
    
    if (por_no_primos > 0){
        cout << "El porcentaje de n£meros no primos: " << por_no_primos << endl;
    }
    

    return 0;
}

/*
    6 Dada una lista de números todos distintos entre sí y que finaliza con un cero,
    determinar e informar con un cartel aclaratorio si los números primos de la lista
    están ordenados de menor a mayor. Los números primos pueden no ser consecutivos, 
    pero sí deben estar ordenados. Por ejemplo:
    Ejemplo A: 4, 5, 7, 12, 13, 0. Se emite un cartel que diga “Ordenados” (5, 7 y 13)
    Ejemplo B: 2, 10, 3, 5, 11, 7, 14, 0. Se emite un cartel que diga “Desordenados” (2, 3, 5, 11 y 7).
*/
#include <iostream>
using namespace std;

int main(){

    int num, con = 0, primos = 0;
    int x = 0, primos_mayor = 0;
    bool ordenados = true;

    cout << "Diguite números o cero (0) para finalizar: " << endl;
    cin >> num;

    while (num != 0)
    {
        if (num > 1){
            con = 0;
            for ( x = 1; x <= num; x++)
            {
                if(num % x == 0){
                    con++;
                }
            }    
        }
        if (con == 2){
            primos++;
            if (num <= primos_mayor){
                ordenados = false;
            }
            primos_mayor = num;
        }


        cout << "Diguite números o cero (0) para finalizar: " << endl;
        cin >> num;
    }
    
    if (primos > 0){
        cout << "-----------------------------------" << endl;
        if (ordenados){
            cout << "Ordenados." << endl;
        }else{
            cout << "Desordenados." << endl;
        }
    }else{
        cout << "No hay números primos en la lista." << endl;
    }
    

    return 0;
}
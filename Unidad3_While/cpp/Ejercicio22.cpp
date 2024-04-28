#include <iostream>
using namespace std;

int main(){
    /*
    22 Hacer un programa que permita ingresar una lista de números positivos, negativos o cero hasta que se ingrese el 5º número par.
       Calcular e informar:
       - La cantidad de ternas de números negativos ingresados de manera consecutiva.
       Ejemplo A: 4, -1, -4, -5, 10, -3, -5, 7, -5, -3, -6, 10 → Cantidad de ternas: 2
    */

    int num, con_par = 0, con_nega = 0, ternas_nega = 0;
   
    cout << "Diguite una lista de números o un quinto (5°) número par, para finalizar: " << endl;
    cin >> num;

    while (con_par != 5)
    {
        if (num % 2 == 0){
            con_par++;
        }

        if (num < 0){
            con_nega++;
            if (con_nega == 3){
                ternas_nega++;
            }
        }else {
            con_nega = 0;
        } 

        if (con_par != 5){
            cout << "Diguite una lista de números o un quinto (5°) número par, para finalizar: " << endl;
            cin >> num;
        }  
    }

    cout << "Cantidad de ternas de números negativos: " << ternas_nega << endl;

    return 0;
}
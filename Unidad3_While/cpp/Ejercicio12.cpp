#include <iostream>
using namespace std;

int main(){
    /**
    12 Dada una lista de números que finaliza cuando se ingresa un cero, informar cual es el primer y segundo número impar ingresado. 
       Ejemplo 8, 4, 5, 6, -9, 5, 7, 0 se informa 5 y -9
    */

    int num, primer_impar = 0, segundo_impar = 0, con = 0;

    cout << "Ingrese una lista de números o cero (0) para finalizar: " << endl;
    cin >> num;

    while (num != 0)
    {
        if (num % 2 != 0){
            con++;
            if (con == 1){
                primer_impar = num;
            }else if (con == 2){
                segundo_impar = num;
            }
        }
        cout << "Ingrese una lista de números o cero (0) para finalizar: " << endl;
        cin >> num; 
    }
    
    if (con > 0 ){
        cout << "Primer número impar: " << primer_impar << endl;
        if (con > 1){
        cout << "Segundo número impar: " << segundo_impar << endl;
        }
    }
    
    return 0;
}
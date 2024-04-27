#include <iostream>
using namespace std;

int main(){
    /**
    13 Dada una lista de números que finaliza cuando se ingresa un cero, informar cual es el primer y último número impar ingresado. 
       Ejemplo 8, 4, -5, 6, 9, 5, 18, 0 se informa -5 y 5.
    */

    int num, primer_impar = 0, ultimo_impar = 0;
    bool bandera = true;

    cout << "Diguite una lista de números o cero (0) para finalizar: " << endl;
    cin >> num;

    while (num != 0)
    {
        if (num % 2 != 0){
            if (bandera){
                primer_impar = num;
                ultimo_impar = num;
                bandera = false;
            }else{
                ultimo_impar = num;
            }
        }
        cout << "Diguite una lista de números o cero (0) para finalizar: " << endl;
        cin >> num;
    }
    
    if (!bandera){
        cout << "El primer número impar es: " << primer_impar << endl;
        cout << "El último número impar es: " << ultimo_impar << endl;
    }

    return 0;
}
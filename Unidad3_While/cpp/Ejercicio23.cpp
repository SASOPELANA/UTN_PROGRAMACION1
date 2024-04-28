#include <iostream>
using namespace std;

int main(){
    /**
    23 Dada una lista de números que finaliza cuando se ingresa un número divisible por 7, informar cual es el anteúltimo y último número impar ingresado.
       Ejemplo 8, 4, -5, 6, 10, 5, 18, 14 se informa -5 y 5.
       Nota: Contemplar la posibilidad que podría no haber números impares en la lista.
    */

    int num, divisible_siete = 0, ante_impar = 0, ultimo_impar = 0;
    bool bandera = true;

    cout << "Diguite números o un número divisible por siete (7) para finalizar: " << endl;
    cin >> num;

    while (divisible_siete != 1)
    {
        if (num % 7 == 0){
            divisible_siete++;
        }

        if (bandera){
            if(num % 2 != 0){
                ultimo_impar = num;
                bandera = false;
            }
        }else if(num % 2 != 0){
            ante_impar = ultimo_impar;
            ultimo_impar = num;
        }

        if (divisible_siete != 1){
            cout << "Diguite números o un número divisible por siete (7) para finalizar: " << endl;
            cin >> num;
        }
    }
    
    if (ultimo_impar != 0){
        cout << "El ultimo número impar: " << ultimo_impar << endl;
    }else{
        cout << "No se ingresaron números impares.";
    }
    if (ante_impar != 0){
        cout << "El anteúltimo número impar: " << ante_impar << endl;
    }else{
        cout << "No se ingreso un anteúltimo número impar." << endl;
    }

    return 0;
}
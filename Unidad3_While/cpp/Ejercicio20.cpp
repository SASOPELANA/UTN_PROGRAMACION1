#include <iostream>
using namespace std;

int main(){
    /*
    20 Dada una lista de números que finaliza cuando se ingresa un cero, informar el primer número par ingresado y su ubicación en la lista y el último de los
       números primos y su ubicación en la lista.
       Ejemplo A: 7, 4, 5, 6, 9, 13, 10 se informa Primer número par: 4 ubicación 2.
       Último primo: 13 ubicación 6.
       Ejemplo B: 9, 5, 21, 9, 13, 15, 6 se informa Primer número par: 6 ubicación 7.
       Último primo: 13 ubicación 5.
    */

    int num, x = 1, i = 1, primer_par = 0, posicion_par = 0, primo = 0, con_primos = 0, posicion_primos = 0;
    bool bandera = true, primosss = false;

    cout << "Diguite una lista de números o cero (0) para finalizar: " << endl;
    cin >> num;

    while (num != 0)
    {
        if (num % 2 == 0){
            if (bandera){
                primer_par = num;
                posicion_par = x;
                bandera = false;
            } 
        }
        
        con_primos = 0; 
        i = 1;
        while (i <= num)
        {
            if (num % i == 0){
                con_primos++;
            }
            i++;
        }
        if (con_primos == 2){
            primo = num;
            posicion_primos = x;
            primosss = true;
        }
        x++;

        cout << "Diguite una lista de números o cero (0) para finalizar: " << endl;
        cin >> num;
    }
    
    if (!bandera){
        cout << "El primer número par es: " << primer_par << " y su ubicación " << posicion_par << endl;
    }else{
        cout << "No se ingresaron números pares." << endl;
    }

    if (primosss){
        cout << "El ultimo número primo es: " << primo << " y su ubicaión: " << posicion_primos << endl;
    }else{
        cout << "No se ingresaron numeros primos" << endl;
    }

    return 0;
}
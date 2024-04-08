#include <iostream>
using namespace std;

int main(){
    /*
    22 Dada una lista de 7 números informar el primer número par ingresado y su ubicación en la lista y el último de los números primos y su ubicación en la lista. 
       Ejemplo A: 7, 4, 5, 6, 9, 13, 10 se informa: 
       Primer número par: 4 ubicación 2. Último primo: 13 ubicación 6. 
       Ejemplo B: 9, 5, 21, 9, 13, 15, 6 se informa: 
       Primer número par: 6 ubicación 7. Último primo: 13 ubicación 5.
    */

    int num, con_par = 0, primer_par, posicion_par;
    int ulti_primo, posicion_primo;

    for (int x = 1; x <= 7; x++)
    {
        cout << "Diguite números: " << endl;
        cin >> num;

        if (num % 2 == 0){
            con_par++;
            if (con_par == 1){
                primer_par = num;
                posicion_par = x;
            }
        }

        int con = 0;
        for (int i = 1; i <= num; i++)
        {
            if (num % i == 0){
                con++;
            }
        }

        if (con == 2){
            ulti_primo = num;
            posicion_primo = x;
        }    

    }

    cout << "Primer número par: " << primer_par << " ubicación " << posicion_par << "." << endl;
    cout << "Último primo: " << ulti_primo << " ubicación " << posicion_primo << "." << endl;

    return 0;
}
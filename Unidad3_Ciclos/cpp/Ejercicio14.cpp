#include <iostream>
using namespace std;

int main(){
    /**
    14 Dada una lista de 7 números informar cual es el primer, el segundo, el anteúltimo y el último número impar ingresado.
       Ejemplo 8, 4, -5, 7, 9, 18, 5 se informa: Primer impar: -5, Segundo impar: 7, Anteúltimo impar: 9 y Último impar: 5.
    */

    int num, primer_impar, segundo_impar, anteultimo_impar, ultimo_impar, con_impar = 0;

    for (int x = 0; x < 7; x++)
    {
        cout << "Diguite numeros: " << endl;
        cin >> num;

        if (num % 2 != 0){
            con_impar++;
        if (con_impar == 1){
        primer_impar = num;
        }
        if (con_impar == 2){
        segundo_impar = num;
        }
        anteultimo_impar = ultimo_impar;
        ultimo_impar = num;
        }
    }

    if (con_impar > 0){
        cout << "Primer impar: " << primer_impar << endl;
        cout << "Último impar: "<< ultimo_impar << endl;
    }
     if (con_impar > 1){
        cout << "Segundo impar: "<< segundo_impar << endl;
        cout << "Anteúltimo impar: " << anteultimo_impar << endl;    
    }

    return 0;
}
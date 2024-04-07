#include <iostream>
using namespace std;

int main(){
    /**
    8 Hacer un programa para ingresar una lista de 10 números, luego informar el porcentaje de positivos, negativos, y  ceros.
    */

    int num, porcentaje_positivos = 0, porcentaje_negativos = 0, porcentaje_ceros = 0, con_positivos = 0, con_negativos = 0, con_ceros = 0;
    

    for (int x = 0; x < 10;  x++){
        cout << "Diguite números: " << endl;
        cin >> num;

        if (num >0){
            con_positivos++;
        }else if (num == 0){
            con_ceros++;
        }else{
            con_negativos++;
        }

    }

    porcentaje_positivos = con_positivos * 100 / (10);
    porcentaje_negativos = con_negativos * 100 / (10);
    porcentaje_ceros = con_ceros * 100 / (10);
    cout << endl;

    cout << "Porcentaje positivos: " << porcentaje_positivos << "% -> Porcentaje negativos: " << porcentaje_negativos << "% -> Porcentaje ceros: " << porcentaje_ceros << "%." << endl;

    return 0;
}
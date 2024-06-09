/*
    6 Leer 10 números y guardarlos en un vector. Determinar e informar los dos últimos números pares en el vector y sus respectivas posiciones en el mismo.
    Suponer que habrá al menos dos números pares.
*/
#include <iostream>
using namespace std;

int main(){

    int vector[10];
    int num, x = 0, con_par = 0;
    int ultimoPar = 0, anteUltimoPar = 0;
    int posi_ulti = 0, posi_ante = 0;

    for (x = 0; x < 10; x++)
    {
        cout << "Ingrese números: ";
        cin >> num;
        vector[x] = num;
    }  

    for (x = 0; x < 10; x++)
    {
        if(vector[x] % 2 == 0){
            con_par++;
            if(con_par == 1){
                ultimoPar = vector[x];
                posi_ulti = x + 1;
            }else if(con_par > 1){
                anteUltimoPar = ultimoPar;
                posi_ante = posi_ulti;
                ultimoPar = vector[x];
                posi_ulti = x + 1;
            }
        }
    }  

    cout << endl;
    if (con_par == 1){
        cout << "Último número Par: " << ultimoPar << ". Su posicion --> " << posi_ulti << endl;
    }else if(con_par > 1){
        cout << "Último número Par: " << ultimoPar << ". Su posicion --> " << posi_ulti << endl;
        cout << "Ante último número Par: " << anteUltimoPar << ". Su Posicion --> " << posi_ante << endl;
    }else{
        cout << "No se ingresaron números pares. " << endl;
    }
    
    return 0;
}
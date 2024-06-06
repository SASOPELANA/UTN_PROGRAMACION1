/*
    3 Hacer una funci¢n llamada EsPrimo que determine si un n£mero es primo o no. La funci¢n debe recibir el n£mero y devolver true si es primo o false si no lo es. 
    La funci¢n no debe mostrar nada por pantalla.
    Hacer un programa para ingresar un n£mero y, utilizando EsPrimo, emita luego un cartel indicando si el n£mero ingresado es primo o no es primo.
*/
#include <iostream>
using namespace std;

int EsPrimo(int n1){
    int x = 0, con_uno = 0;
    bool bandera_pri = false;

    for ( x = 1; x <= n1; x++)
    {
        if (n1 % x == 0){
            con_uno++;
        }
    }
    if (con_uno == 2){
        bandera_pri = true;
    }
    return bandera_pri;
}

int main(){

    int num;
    bool primo = false;

    cout << "Ingrese un n£mero: " << endl;
    cin >> num;

    primo = EsPrimo(num);

    if(primo){
        cout << "Es primo." << endl;
    }else{
        cout << "No es primo." << endl;
    }

    return 0;
}

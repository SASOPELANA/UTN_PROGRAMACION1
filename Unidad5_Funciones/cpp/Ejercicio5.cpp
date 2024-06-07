/*
    5 Hacer una función llamada Redondear que reciba como parámetro un número float y devuelva un número entero con el redondeo del mismo.
    Por ejemplo:
    Si recibe 7.78, debe devolver 8.
    Si recibe 7.48, debe devolver 7.
    Si recibe 7.5, debe devolver 8.
    Hacer un programa para ingresar un número y, utilizando Redondear, emita luego un cartel indicando el número redondeado.
*/
#include <iostream>
using namespace std;

int Redondear(float n1){
    int resultado = 0;
    float resto = 0;
    resto = n1 - (int)n1;
    if(resto >= 0.5){
        resultado = (n1 - resto) + 1;
    }else if(resto < 0.5){
        resultado = n1 - resto;
    }
    return resultado;
}

int main(){

    float num;
    int redondo = 0;

    cout << "Ingrese un numero decimal: "; 
    cin >> num;

    redondo = Redondear(num);

    cout << "Numero Redondeado: " << redondo << endl;

    return 0;
}

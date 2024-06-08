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

float Redondeo(float A);

int main(){

    float n;
    int r = 0;

    cout << "Digite un número decimal: ";
    cin >> n;

    r = Redondeo(n);

    cout << "Redondeo: " << r << endl;

    return 0;
}

float Redondeo(float A){
    int F = A;
    float resultado = A - F;

    if (resultado >= 0.5){
        resultado = (int) A + 1;
    }else{
        resultado = (int) A;
    }

    return resultado;
}
/*
    7 Escribir una función CalcularMaximoAbsoluto que reciba dos números y retorne el máximo absoluto de ambos. Por ejemplo el máximo absoluto de los
    números -40 y 20 es 40.
    Hacer un programa para ingresar dos números y, utilizando CalcularMaximoAbsoluto, emita luego el número mayor absoluto de ambos.
*/
#include <iostream>
using namespace std;

int CalcularMaximoAbsoluto(int n1, int n2){
    if( n1 < 0){
        n1 = n1 * -1;
    }
    if(n2 < 0){
        n2 = n2 * -1;
    }
    if(n1 > n2){
        return n1;
    }else{
        return n2;
    }
}

int main(){

    int num1, num2;

    cout << "Ingrese un numero: "; 
    cin >> num1;
    cout << "Ingrese otro numero: ";
    cin >> num2;

    num1 = CalcularMaximoAbsoluto(num1, num2);

    cout << "El numero mayor absoluto de ambos: " << num1 << endl;

    return 0;
}

/*
    2 Hacer una funci¢n llamada CalcularMaximo que determine el m ximo entre dos n£meros. La funci¢n debe recibir dos n£meros enteros por valor y devolver
    el valor m s grande. Si los n£meros son iguales debe devolver cualquiera de los dos. La funci¢n no debe mostrar nada por pantalla.
    Hacer un programa para ingresar dos n£meros y, utilizando CalcularMaximo, emita luego el n£mero mayor de ambos.
*/
#include <iostream>
using namespace std;

int CalcularMaximo(int n1, int n2){
    int num_maximo = 0;
    if (n1 > n2){
        num_maximo = n1;
    }else if (n1 == n2){
        num_maximo = n1;
    }else{
        num_maximo = n2;
    }
    return num_maximo;
}

int main(){

    int num1, num2, maximo = 0;

    cout << "Proporcione un n£mero: " << endl;
    cin >> num1;
    cout << "Proporcione un segundo n£mero: " << endl;
    cin >> num2;

    maximo = CalcularMaximo(num1, num2);

    cout << "El N£mero M ximo: " << maximo << endl;    

    return 0;
}
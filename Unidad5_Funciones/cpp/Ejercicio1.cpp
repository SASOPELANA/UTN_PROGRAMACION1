/*
    1 Hacer una funci¢n llamada EsPar que determine si un n£mero es par o no. La funci¢n debe recibir un n£mero entero por valor y devolver true si es par o false
    si no lo es. La funci¢n no debe mostrar nada por pantalla.
    Hacer un programa para ingresar un n£mero y, utilizando EsPar, emita luego un cartel indicando si el n£mero ingresado es par o no es par.
*/
#include <iostream>
using namespace std;

int EsPar(int n1){
    bool par = false;
    if(n1 % 2 == 0){
        par = true;
    }
    return par;
}

int main(){

    int num;
    bool par1 = false;

    cout << "Ingrese un n£mero: " << endl;
    cin >> num;

    par1 = EsPar(num);

    if (par1)
    {
       cout << "El n£mero es Par." << endl;
    }else{
        cout << "El n£mero No es Par." << endl;
    }
    
    return 0;
}
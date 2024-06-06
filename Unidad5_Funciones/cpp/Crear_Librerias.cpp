#include <iostream>
#include "Mis_Funciones.h"
using namespace std;

int main(){

    int n1, n2, r;

    cout << "Ingrerse un n£mmero: ";
    cin >> n1;
    cout << "Ingrese otro n£mero: ";
    cin >> n2;

    r = sumar(n1,n2);

    cout << "El resultado es: " << r << endl;

    return 0;
}
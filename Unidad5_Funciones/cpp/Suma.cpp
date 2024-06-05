#include <iostream>
using namespace std;

int suma(int n1, int n2){

    int r = n1 + n2;
    return r;
}

int main(){

    int a = 0, b = 0, h = 0;
    cout << "Ingrese un n£mero: "; 
    cin >> a;
    cout << "Ingrese otro n£mero: ";
    cin >> b;

    h = suma(a,b);

    cout << "La suma es: " << h << endl;

    return 0;
}
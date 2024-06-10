/*
    18 Dada una lista de 10 números, cargarlos en un vector. Luego ingresar dos números a y b menores a 10. Determinar e informar cuál 
    es el valor máximo en el vector considerando los elementos que están entre las posiciones a y b.
*/
#include <iostream>
using namespace std;

int main(){

    int vector[10];
    int num, i = 0, a = 0, b = 0;
    int max = 0;

    for (i = 0; i < 10; i++)
    {
        cout << "Ingrese un número: ";
        cin >> num;
        vector[i] = num;
    }
    
    cout << "A_ Ingrese un número menor a 10: " << endl;
    cin >> a;
    cout << "B_ Ingrese otro número menor a 10: " << endl;
    cin >> b;

    while (!(a != b && a >= 0 && a < 10 && b >= 0 && b < 10))
    {
        cout << endl << " Error. Ingrese números distintos entre si, y que los mismos sean mayor a 0 y menor 10." << endl;
        cout << "A_ Ingrese un número menor a 10: " << endl;
        cin >> a;
        cout << "B_ Ingrese otro número menor a 10: " << endl;
        cin >> b;
    }
    
    if(b > a){
        num = a;
        a = b;
        b = num;
    }

    max = vector[b];
    for (i = b + 1; i <= a; i++)
    {
        if(vector[i] > max){
            max = vector[i];
        }
    }
    
    cout << endl;
    cout << "El Máximo entre las posiciones o indice " << b << " y " << a << " es: " << max << endl; 

    return 0;
}
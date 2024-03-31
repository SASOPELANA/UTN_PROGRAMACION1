#include <iostream>
using namespace std;

int main()
{
    /**
    10 Hacer un programa para ingresar cinco números y listar el máximo y el mínimo de ellos.
    */

    int n1, n2, n3, n4, n5, max, mini;

    cout << "Diguite un número: ";
    cin >> n1;
    cout << "Diguite un segundo número: ";
    cin >> n2;
    cout << "Diguite un tercer número: ";
    cin >> n3;
    cout << "Diguite un cuarto número: ";
    cin >> n4;
    cout << "Diguite un quinto número: ";
    cin >> n5;

    if (n1 > n2){
        max = n1;
    }else{
        max = n2;
    }
    if (n3 > max){
        max = n3;
    }
    if (n4 > max){
        max = n4;
    }
    if (n5 > max){
        max = n5;
    }
    if (n1 < n2){
        mini = n1;
    }else{
        mini = n2;
    }
    if (n3 < mini){
        mini = n3;
    }
    if (n4 < mini){
        mini = n4;
    }
    if (n5 < mini){
        mini = n5;
    }

    cout << "El número maximo es: " << max << " y el minimo es: " << mini << endl;

    return 0;
}
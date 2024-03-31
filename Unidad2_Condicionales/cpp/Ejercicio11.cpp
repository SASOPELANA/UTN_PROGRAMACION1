#include <iostream>
using namespace std;

int main()
{
    /**
    11 Hacer un programa para ingresar cinco números y listar cuantos de esos cinco números son positivos, cuantos son negativos y cuantos son iguales a 0.
    */

    int n1, n2, n3, n4, n5, positivo = 0, negativo = 0, cero = 0;
    
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
    cout << endl;

    if (n1 > 0){
        positivo++;
    }else if (n1 < 0){
        negativo++;
    }else{
        cero++;
    }
     if (n2 > 0){
        positivo++;
    }else if (n2 < 0){
        negativo++;
    }else{
        cero++;
    }
     if (n3 > 0){
        positivo++;
    }else if (n3 < 0){
        negativo++;
    }else{
        cero++;
    }
     if (n4 > 0){
        positivo++;
    }else if (n4 < 0){
        negativo++;
    }else{
        cero++;
    }
    if (n5 > 0){
        positivo++;
    }else if (n5 < 0){
        negativo++;
    }else{
        cero++;
    }

    cout << "Los números positivos son: " << positivo << ", los números negativos son: " << negativo <<", los números iguales a cero son: " << cero << endl;

    return 0;
}
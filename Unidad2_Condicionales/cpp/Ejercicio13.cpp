#include <iostream>
using namespace std;

int main()
{
    /**
    13 Hacer un programa para ingresar tres números distintos y listarlos ordenados de menor a mayor. 
       Sugerimos probar CADA UNA de las siguientes 6 combinaciones.
       Si N1=8, N2=6, N3=10 ó  N1=8, N2=10, N3=6. Se muestra: 6, 8, 10.
       Si N1=6, N2=8, N3=10 ó  N1=10, N2=8, N3=6. Se muestra: 6, 8, 10.
       Si N1=6, N2=10, N3=8 ó  N1=10, N2=6, N3=8. Se muestra: 6, 8, 10.
    */

    int num1, num2, num3, mini, medio, max;

    cout << "Diguite un número: ";
    cin >> num1;
    cout << "Diguite un segundo número, distinto al primero: ";
    cin >> num2;
    cout << "Diguite un tercer número, distinto al primero y segundo: ";
    cin >> num3;
    cout << endl;

    if (num1 > num2)
    {
        max = num1;
        medio = num2;
    }else{
        max = num2;
        medio = num1;
    }
    if (num3 > max){
        mini = medio;
        medio = max;
        max = num3;
    }else if (num3 < medio){
        mini = num3;
    }else{
        mini = medio;
        medio = num3;
    }

    cout << "Se muestra: " << mini << ", " << medio << ", " << max << "." << endl;

    return 0;
}
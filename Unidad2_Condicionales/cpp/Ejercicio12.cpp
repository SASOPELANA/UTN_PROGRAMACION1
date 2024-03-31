#include <iostream>
using namespace std;

int main()
{
    /**
    12 Hacer un programa para leer tres números diferentes y determinar e informar el número del medio.
       Sugerimos probar CADA UNA de las siguientes 6 combinaciones.
       N1=8, N2=6, N3=10. Valor del medio: 8. N1=8, N2=10, N3=6. Valor del medio: 8
       N1=6, N2=8, N3=10. Valor del medio: 8. N1=10, N2=8, N3=6. Valor del medio: 8
       N1=6, N2=10, N3=8. Valor del medio: 8. N1=10, N2=6, N3=8. Valor del medio: 8
    */

    int num1, num2, num3;

    cout << "Diguite un número: ";
    cin >> num1;
    cout << "Diguite un segundo número, diferente al primero: ";
    cin >> num2;
    cout << "Diguite un tercer número, diferente al primero y al segundo: ";
    cin >> num3;
    cout << endl;

    if (num1 > num2 && num1 < num3 || num1 > num3 && num1 < num2)
    {
        cout << "El número medio es: " << num1 << endl;
    }else if (num2 > num1 && num2 < num3 || num2 > num3 && num2 < num1)
    {
        cout << "El número medio es: " << num2 << endl;
    }else
    {
        cout << "El número medio es: " << num3 << endl;
    }

    cout << endl << "--Fin del programa--" << endl;
    
    return 0;
}
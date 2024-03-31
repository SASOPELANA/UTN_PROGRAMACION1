#include <iostream>
using namespace std;

int main()
{
    /**
    9 Hacer un programa para ingresar tres números y listar el máximo de ellos.
    */

   int num1, num2, num3;

    cout << "Proporcione un numero: ";
    cin >> num1;
    cout << "Proporcione un segundo numero: ";
    cin >> num2;
    cout << "Proporcione un tercer numero: ";
    cin >> num3;
    cout << endl;

    if (num1 > num2 && num1 > num3)
    {
        cout << "El numero maxímo es: " << num1 << endl;
    }else if (num2 > num3)
    {
        cout << "El numero maxímo es: " << num2 << endl;
    }else
    {
        cout << "El numero maxímo es: " << num3 << endl;
    }
    
    return 0;
}
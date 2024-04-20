#include <iostream>
using namespace std;

int main(){
    /**
    4 Hacer un programa para que el usuario ingrese un número positivo y que luego se muestre por pantalla los números entre el 1 y el número 
      ingresado por el usuario. 
      Ejemplo. Si el usuario ingresa 15, se mostrarán los números entre el 1 y el 15.
    */

    int num1 = 1, num2;

    cout << "Ingrese un número: " << endl;
    cin >> num2;
    while (num1 <= num2)
    {
        cout << num1 << endl;
        num1++;
    }
    
    return 0;
}
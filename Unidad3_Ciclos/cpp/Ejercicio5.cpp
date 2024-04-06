#include <iostream>
using namespace std;

int main(){
    /**
    5 Hacer un programa para que el usuario ingrese dos números y luego el
      programa muestre por pantalla los números entre el menor y el mayor de ambos.
      Ejemplo, si el usuario ingresa 3 y 15, se mostrarán los números entre el 3 y el 15
      y si el usuario ingresa 25 y 8, se mostrarán los números entre el 8 y el 25.
    */

    int num1, num2, max, min;

    cout << "Diguite un número: " << endl;
    cin >> num1;
    cout << "Diguite otro número: " << endl;
    cin >> num2;
    cout << endl;

    if (num1 > num2){
        max = num1;
        min = num2;
    }else{
        max = num2;
        min = num1;
    }

    for (int x = min; x <= max; x++){
        cout << x << endl;
    }

    return 0;
}
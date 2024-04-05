#include <iostream>
using namespace std;

int main(){
    /**
    4 Hacer un programa para que el usuario ingrese un número positivo y luego se muestren por pantalla los números entre el 1 y el número ingresado por el usuario. 
      Ejemplo. Si el usuario ingresa 15, se mostrarán los números entre el 1 y el 15.
    */

    int num;

    cout << "Diguite un número positivo: " << endl;
    cin >> num;
    cout << endl;

    for (int x = 1; x <= num; x++)
    {
        cout << x << endl;
    }
    
    return 0;
}
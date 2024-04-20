#include <iostream>
using namespace std;

int main(){
    /**
    3 Hacer un programa para mostrar por pantalla los números del 20 al 1 en orden
      decreciente.
      Importante: El programa no tiene ningún ingreso de datos.
    */

    int num = 20;

    while (num >= 1)
    {
        cout << num << endl;
        num--;
    }
    
    return 0;
}
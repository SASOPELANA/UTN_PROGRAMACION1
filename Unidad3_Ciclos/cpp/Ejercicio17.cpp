#include <iostream>
using namespace std;

int main(){
    /*
    17 Hacer un programa para ingresar un número y luego informar todos los divisores de ese número. 
       Ejemplo A. Si se ingresa 6 se listarán: 1, 2, 3 y 6
       Ejemplo B. Si se ingresa 9 se listarán: 1, 3 y 9.
       Ejemplo 3. Si se ingresa 11 se listarán 1 y 11.
    */

    int num;

    cout << "Ingrese un número: " << endl;
    cin >> num;

    for (int x = 1; x <= num; x++)
    {
        
        if (num % x == 0){
        
            cout << "Divisible: " << x << endl;
            
        }

    }

    return 0;
}
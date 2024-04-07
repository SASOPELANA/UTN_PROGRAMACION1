#include <iostream>
using namespace std;

int main(){
    /**
    18 Hacer un programa para ingresar un número y luego informar todos los divisores pares de ese número. 
       Ejemplo A. Si se ingresa 6 se listará: 2 y 6. 
       Ejemplo B. Si se ingresa 8 se listará: 2, 4 y 8. 
       Ejemplo C. Si se ingresa 11 no se listará nada.
    */

    int num;

    cout << "Ingrese un número: " << endl;
    cin >> num;

    for (int x = 1; x <= num; x++)
    {
        
        if (num % x == 0){
        
            if (x % 2 == 0){
                cout << "Divisores pares: " << x << endl;
            }
            
        }

    }


    return 0;
}
#include <iostream>
using namespace std;

int main(){
    /**
    19 Hacer un programa para ingresar un número y luego informar la cantidad de divisores de ese número. 
       Ejemplo A. Si se ingresa 6 se listará: 4 divisores. 
       Ejemplo B. Si se ingresa 9 se listará: 3 divisores. 
       Ejemplo C. Si se ingresa 11 se listará: 2 divisores.
    */

    int num, con_divisible = 0;

    cout << "Ingrese un número: " << endl;
    cin >> num;

    for (int x = 1; x <= num; x++)
    {
        
        if (num % x == 0){
        
            con_divisible++;
            
        }

    }

    cout << " Cantidad de divisores: " << con_divisible << endl;

    return 0;
}
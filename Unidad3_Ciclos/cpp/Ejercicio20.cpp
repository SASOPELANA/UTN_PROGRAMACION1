#include <iostream>
using namespace std;

int main(){
    /*
    20 Se define a un número como primo cuando tiene solamente dos divisores. Ejemplo A: 2, 7, 11, 13 son números primos, 
       ya que todos tienen solamente dos divisores. 
       Ejemplo B: 6 no es primo, pues tiene 4 divisores (1, 2, 3 y 6) 
       Ejemplo C: 9 no es primo, pues tiene 3 divisores (1, 3 y 9) 
       Hacer un programa para ingresar un número y luego informar con un cartel aclaratorio si el mismo es un número primo o es número no primo.
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

    if (con_divisible == 2){
        cout << "El número " << num << " es primo." << endl;
    }else{
        cout << "El número " << num << " no es primo." << endl;
    }

    return 0;
}
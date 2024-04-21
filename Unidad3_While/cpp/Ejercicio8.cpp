#include <iostream>
using namespace std;

int main(){
    /*
    8 Hacer un programa para ingresar una lista de números que finaliza cuando se ingresa un cero, luego informar el máximo y la posición del máximo en la lista.
     En caso de “empates” considerar la primera aparición.
     Ejemplo A: 5, -10, 20, 8, 25, 13, 35, -8, -5, 20, 0. Se listará Máximo 35 Posición 7.
     Ejemplo B: 5, -10, 20, 8, 25, 13, 55, -8, 55, 20, 0. Se listará Máximo 55 Posición 7.
     Ejemplo C: -9, -10, -20, -3, -9, -13, -55, -18, -55, 0. Se listará Máximo -3 Posición 4.
    */

    int num, maximo,posicion, con = 0;
    bool bandera = true;

    cout << "Digite números o cero (0) para finalizar: " << endl;
    cin >> num;

    while (num != 0)
    {
        con++;
        if (bandera){
            maximo = num;
            posicion = con;
            bandera = false;
        }else if (num > maximo){
            maximo = num;
            posicion = con;
        }
        cout << "Digite números o cero (0) para finalizar: " << endl;
        cin >> num;
    }
    
    cout << "El Máximo es: " << maximo << " Posición: " << posicion << endl;

    return 0;
}
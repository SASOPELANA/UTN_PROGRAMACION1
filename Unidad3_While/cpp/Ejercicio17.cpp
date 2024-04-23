#include <iostream>
using namespace std;

int main(){
    /*
    17 Hacer un programa para ingresar una lista de números que finaliza cuando se ingresan dos números positivos consecutivos, y luego informar el máximo.
       Cuando se ingresa el segundo número positivo consecutivo el mismo debe ser descartado.
       Ejemplo A: 5, -10, 20, -8, 0, 13, -35, -8, 15, 10. Se listará Máximo 20. En este caso, el segundo número positivo consecutivo, el 10, no se analiza, 
       sólo sirve para finalizar el ingreso.
       Ejemplo B: 5, -10, 20, -20, 0, 55, -13, 45, -8, -5, 12, 120. Se listará Máximo 55.
       En este caso, el segundo número positivo consecutivo, el 120, no se analiza, sólo sirve para finalizar el ingreso.
    */

    int num, maximo, posi = 0;
    bool positivo = true;

    cout << "Diguite una lista de números o dos números positivos consecutivos para finalizar: " << endl;
    cin >> num;
    while (positivo)
    {   
        if (num > 0){
            posi++;
            if(posi == 1){
                if(num > maximo){
                    maximo = num;
                }
            }          
        }else{
            posi = 0;
        }
        
        if (posi == 2){
            positivo = false;
        }else{
            cout << "Diguite una lista de números o dos números positivos consecutivos para finalizar: " << endl;
            cin >> num;
        }    
    }
    
    cout << "El Máximo es: " << maximo << "." << endl;

    return 0;
}
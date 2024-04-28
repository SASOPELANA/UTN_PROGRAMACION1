#include <iostream>
using namespace std;

int main(){
    /*
    21 Hacer un programa que permita ingresar una lista de números positivos, negativos o cero hasta que la diferencia entre el máximo y el mínimo sea mayor a 10. 
       Calcular e informar:
       - La cantidad de números que componen la lista.
       Ejemplo A: 1, 4, 6, -10 → Cantidad de números: 4
       Ejemplo B: 100, 104, 106, 100, 100, 105, 200 → Cantidad de números: 7
    */

    int num, maximo = 0, minimo = 0, con = 0, diferencia = 0;
    bool bandera = true, cortar = true;

    cout << "Diguite una lista de números, o que la diferencia del máximo y mínimo sea mayor a 10, para finalizar: " << endl;
    cin >> num;

    while (cortar)
    {
        con++;
        if (bandera){
            maximo = num;
            minimo = num;
            bandera = false;
        }else if(num < minimo){
            minimo = num;
        }else{
            if(num > maximo){
                maximo = num;
            }
        }

        diferencia = maximo - minimo;

        if (diferencia >= 10)
        {
            cortar = false;
        }else{
            cout << "Diguite una lista de números, o que la diferencia del máximo y mínimo sea mayor a 10, para finalizar: " << endl;
            cin >> num; 
        }
       
    }
    
    cout << "Cantidad de números: " << con << endl;

    return 0;
}
#include <iostream>
using namespace std;

int main(){
    /*
    13 Dada una lista de 10 números informar cual es el máximo de los pares. 
       Ejemplo A: 2, 10, 20, 8, 25, 13, 36, - 8, -5, 20 se informa máximo: 36
       Ejemplo B 5, -13, 23, 81, -55, -13, 55, 4, 15 ,-20 Se informa máximo: 4
       Ejemplo C: -5, -13, -20, -8, -55, -13, -55, -14, -15, -20 se informa máximo: -8
    */

    int num, maximo_par;
    bool bandera_par = false;

    for (int x= 0; x < 10; x++)
    {
        cout << "Diguite números: " << endl;
        cin >> num;

        if (num % 2 == 0)
        {
            if (bandera_par == false)
            {
                maximo_par = num;
                bandera_par = true;
            }else if (num > maximo_par){
                maximo_par = num;         
            }
        }    

    }
    
    cout << "El máximo par es: " << maximo_par << endl;

    return 0;
}
#include <iostream>
using namespace std;

int main(){
    /*
    23 Dada una lista de 10 números informar la cantidad de duplas de números impares que se hayan ingresado consecutivamente. 
       Ejemplo A: 12, 3, 5, 7, 6, 9, 13, 10, 7, -5. 
       En esta lista las duplas son: 3:5, 5:7, 9:13, 7:-5 por lo tanto se informará que hay 4 duplas de números impares ingresados consecutivamente.
       Ejemplo B: 3, 5, 7, 10, 3, 5, 7, 10, 3, 5.
       En esta lista las duplas son: 3:5, 5:7, 3:5, 5:7, 3:5 por lo tanto se informará que hay 5 duplas de números impares ingresados consecutivamente.
       Aclaración: Sólo hay que listar la cantidad de duplas de impares. No hay que mostrar cómo están compuestas las duplas de números.
    */

    int num, anterior, con_duplas_impa = 0;

    cout << "Ingrese números: " << endl;
    cin >> anterior;

    for (int x = 1; x <= 9; x++)
    {
        cout << "Ingrese números: " << endl;
        cin >> num;
    
        if (num % 2 != 0 && anterior % 2 != 0){
            con_duplas_impa++;
        }

        anterior = num;
    }

    cout << "Lista de duplas impares: " << con_duplas_impa << endl;

    return 0;
}
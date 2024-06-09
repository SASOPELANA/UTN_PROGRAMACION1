/*
    8 Dada una lista de n£meros compuesta por 10 subgrupos y cada grupo separado del siguiente por un cero, se pide generar un vector de 10 elementos con el m ximo de cada uno de los subgrupos. 
    Luego mostrar los elementos del vector por pantalla.
*/
#include <iostream>
using namespace std;

int main(){

    int num, x = 0, max = 0;
    int vecMax[10];
    bool bandera = true;

    for (x = 0; x < 10; x++)
    {
        cout << "Ingrese n£meros o cero (0) para cambiar de lista: ";
        cin >> num;

        bandera = true;
        max = 0;
        while (num != 0)
        {
            cout << "           ---- LISTA " << x + 1 << " ----" << endl;

            if(bandera){
                max = num;
                bandera = false;
            }else if(num > max){
                max = num;
            }

            cout << "Ingrese n£meros o cero (0) para cambiar de lista: ";
            cin >> num;
        }

        vecMax[x] = max;

    }
    
    cout << endl;
    for (x = 0; x < 10; x++)
    {
        cout << "M ximo de cada grupo: " << vecMax[x] << endl;
    }
    
    return 0;
}
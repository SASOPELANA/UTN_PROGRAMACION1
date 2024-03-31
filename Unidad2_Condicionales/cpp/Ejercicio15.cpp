#include <iostream>
using namespace std;

int main()
{
    /**
    15 Un año es bisiesto si es múltiplo de 4, exceptuando a los años que son múltiplos de 100 pero que no sean múltiplos de 400. Esto último significa que el año 1900 no es bisiesto, pero el año 2000 sí lo es. Hacer un programa para  ingresar un año y listar por pantalla si es bisiesto o no lo es. 

       Ejemplo A. Si se ingresa el año 2020 se indicará como bisiesto. 
       Ejemplo B. Si se ingresa el año 2019 se indicará como no bisiesto. 
       Ejemplo C. Si se ingresa el año 1800 o 1900 se indicará como no bisiesto. Ejemplo D. Si se ingresa el año 1600 o 2000 se indicará como bisiesto.
    */

    int annio;

    cout << "Diguite un año: ";
    cin >> annio;
    cout << endl;

    if (annio % 4 == 0 && (annio % 100 != 0 || annio % 400 == 0))
    {
        cout << "El año " << annio << " es bisiesto." << endl;
    }else
    {
        cout << "El año " << annio << " no es bisiesto." << endl;
    }

    cout << endl << "--Fin del programa--" << endl;

    return 0;
}
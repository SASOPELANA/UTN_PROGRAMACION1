#include <iostream>
using namespace std;

int main()
{
    /*
    11 Hacer un programa para ingresar por teclado una cantidad de minutos y
       mostrar por pantalla a cuántos días, horas y minutos equivalen.
       Ejemplo A: si se ingresan 1520 minutos el programa mostrará por pantalla que
       equivalen a 1 día, 1 hora y 20 minutos.
       Ejemplo B: si se ingresan 480 minutos el programa mostrará por pantalla que
       equivalen a 0 día, 8 horas y 0 minutos.
    */

    int minutos, dias, horas, resto_minutos;

    cout << "Ingrese una cantidad de minutos: ";
    cin >> minutos;
    dias = minutos / 1440;
    horas = minutos / 60;
    horas = horas % 24;
    resto_minutos = minutos % 60;
    cout << endl;

    cout << "Los minutos que se digitaron equivalen a " << dias << " dias, " << horas << " horas y " << resto_minutos << " minutos." << endl;

    return 0;
}

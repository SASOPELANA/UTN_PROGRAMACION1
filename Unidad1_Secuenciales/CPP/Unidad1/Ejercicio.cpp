#include <iostream>
using namespace std;

int main()
{
    /*
    9 Hacer un programa para ingresar por teclado una cantidad de minutos y
      mostrar por pantalla a cuantas horas y minutos equivalen.
      Ejemplo A: si se ingresan 380 minutos el programa mostrará por pantalla que
      equivalen a 6 horas y 20 minutos.
      Ejemplo B: si se ingresan 720 minutos el programa mostrará por pantalla que
      equivalen a 12 horas y 0 minutos.
      Ejemplo C: si se ingresan 50 minutos el programa mostrará por pantalla que
      equivalen a 0 horas y 50 minutos
    */

    int horas, minutos;

    cout << "Proporcione una cantidad de minutos: ";
    cin >> minutos;

    if (minutos >= 60)
    {
        horas = minutos / 60;
        minutos = minutos % 60;
        cout << "Los minutos equivalen a " << horas  << " horas y " << minutos << " minutos" <<  endl;
    }else
    {
        cout << "Se ingresaron " << minutos << " minutos." << endl;
    }

    return 0;
}

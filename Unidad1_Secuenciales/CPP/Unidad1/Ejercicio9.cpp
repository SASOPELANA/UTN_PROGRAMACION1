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

    int minutos, horas;

    cout << "Diguite una cantidad de minutos: ";
    cin >> minutos;
    horas = minutos / 60;
    minutos = minutos % 60;
    cout << endl;

    cout << "Los minutos que se diguitaron equivalen a " << horas << " horas y " << minutos << " minutos." << endl;

    return 0;
}

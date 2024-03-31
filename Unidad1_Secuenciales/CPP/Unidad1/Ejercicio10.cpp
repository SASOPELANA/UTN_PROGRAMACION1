#include <iostream>
using namespace std;

int main()
{
    /*
    10 Hacer un programa para ingresar por teclado una cantidad de horas y mostrar
       por pantalla a cuantos días y horas equivalen.
       Ejemplo A: si se ingresan 26 horas el programa mostrará por pantalla que
       equivalen a 1 día y 2 horas.
       Ejemplo B: si se ingresan 72 horas el programa mostrará por pantalla que
       equivalen a 3 días y 0 horas.
       Ejemplo C: si se ingresan 20 horas el programa mostrará por pantalla que
       equivalen a 0 días y 20 horas.
    */

    int horas, dias, resto_horas;

    cout << "Proporcione las cantidad de horas: ";
    cin >> horas;
    dias = horas / 24;
    resto_horas = horas % 24;
    cout << endl;

    cout << "Las horas que se proporcionaron equivalen a " << dias << " dias y " << resto_horas << " horas." << endl;

    return 0i;
}

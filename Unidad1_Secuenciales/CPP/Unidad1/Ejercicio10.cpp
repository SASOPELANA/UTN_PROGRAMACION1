#include <iostream>
using namespace std;

int main()
{
    /*
    10 Hacer un programa para ingresar por teclado una cantidad de horas y mostrar
       por pantalla a cuantos d�as y horas equivalen.
       Ejemplo A: si se ingresan 26 horas el programa mostrar� por pantalla que
       equivalen a 1 d�a y 2 horas.
       Ejemplo B: si se ingresan 72 horas el programa mostrar� por pantalla que
       equivalen a 3 d�as y 0 horas.
       Ejemplo C: si se ingresan 20 horas el programa mostrar� por pantalla que
       equivalen a 0 d�as y 20 horas.
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

#include <iostream>
#include <iomanip> // Necesario para usar setprecision
using namespace std;

int main()
{
    /*
    6 Hacer un programa para que un comercio ingrese por teclado la recaudación en
      pesos para cada una de las cuatro semanas del mes. El programa debe listar la
      recaudación promedio por semana y el porcentaje de recaudación por semana.
      Ejemplo. Si se ingresa $1600, $1200, $4800 y $400 se listará como recaudación
      promedio $2000 y como porcentajes por semana: 20%, 15%, 60% y 5%.
    */

    float a, b, c, d, total, recaudacion_semana_promedio;
    float porcentaje_semana_a, porcentaje_semana_b, porcentaje_semana_c, porcentaje_semana_d;

    cout << "Diguite la recaudacion de la semana 1: ";
    cin >> a;
    cout << "Diguite la recaudacion de la semana 2: ";
    cin >> b;
    cout << "Diguite la recaudacion de la semana 3: ";
    cin >> c;
    cout << "Diguite la recaudacion de la semana 4: ";
    cin >> d;
    total = a + b + c + d;
    recaudacion_semana_promedio = total / 4;
    porcentaje_semana_a = a * 100 / total;
    porcentaje_semana_b = b * 100 / total;
    porcentaje_semana_c = c * 100 / total;
    porcentaje_semana_d = d * 100 / total;
    cout << endl;
    cout << fixed << setprecision(2); // Configura la salida para mostrar dos decimales
    cout << "La recaudacion promedio es: $" << recaudacion_semana_promedio << endl;
    cout << "El porcentaje por semana es: " << porcentaje_semana_a << "%, " << porcentaje_semana_b << "%, " << porcentaje_semana_c << "%, " << porcentaje_semana_d << "%" << endl;


    return 0;
}

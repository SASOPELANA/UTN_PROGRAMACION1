#include <iostream>
using namespace std;

int main()
{
    /*
    12 Una granja vende la caja de 12 unidades a $1000 y cada huevo suelto a $120.
       Hacer un programa para ingresar la cantidad de huevos que compra un cliente y
       mostrar por pantalla el importe total a pagar.
       Recordatorio. Por cada 12 huevos se debe calcular una caja y el excedente se
       calcula como suelto.
       Ejemplo A. Si la cantidad ingresada son 15 huevos, el programa calculará 1 caja
       y 3 sueltos, es decir $1000 + $120 x 3 = $1360.
       Ejemplo B. Si la cantidad ingresada son 28 huevos el programa calculará 2
       cajas y 4 sueltos, es decir $1000 x 2 + $120 x 4 = $2480.
       Ejemplo C. Si la cantidad ingresada son 8 huevos, el programa calculará: 0 cajas
       y 8 sueltos, es decir $120 x 8 = $960.
       Ejemplo D. Si la cantidad ingresada son 200 huevos, el programa calculará: 16
       cajas y 8 sueltos, es decir $1000 x 16 + $120 x 8 = $16960.
    */

    int huevos, docena, huevos_unidad, docena_cajas, huevos_sueltos, total;

    cout << "Ingrese la cantidad de huevos para la compra: ";
    cin >> huevos;
    docena = huevos / 12;
    huevos_unidad = huevos % 12;
    docena_cajas = 1000 * docena;
    huevos_sueltos = 120 * huevos_unidad;
    total = docena_cajas + huevos_sueltos;
    cout << endl;

    cout << "El importe total a pagar es: $" << total << "." << endl;

    return 0;
}

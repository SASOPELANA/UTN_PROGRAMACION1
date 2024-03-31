#include <iostream>
using namespace std;

int main()
{
    /*
    7 Hacer un programa para ingresar por teclado el importe de una venta y el
    porcentaje de descuento aplicada a la misma y luego informar por pantalla el
    importe a pagar.
    Ejemplo A. Si el importe de la venta es $1200 y el descuento es el 15% entonces
    el total a pagar ser� de $1020.
    Ejemplo B. Si el importe de la venta es $800 y el descuento es el 0% entonces el
    total a pagar ser� de $800.
    */

    float importe_venta, porcentaje_descuento, importe_pagar;

    cout << "Proporcione el importe de venta: ";
    cin >> importe_venta;
    cout << "Proporcione el porcentaje de descuento: ";
    cin >> porcentaje_descuento;
    porcentaje_descuento = porcentaje_descuento / 100;
    importe_pagar = importe_venta - (importe_venta * porcentaje_descuento);
    cout << endl;

    cout << "El importe a pagar es: $" << importe_pagar << endl;

    return 0;
}

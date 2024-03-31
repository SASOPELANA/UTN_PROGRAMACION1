#include <iostream>
using namespace std;

int main()
{
    /**
    5 Un negocio de perfumería efectúa descuentos según el importe de la venta.
      Si el importe es menor a $100 aplicar un descuento del 5%
      Si el importe es entre $100 y hasta $500 aplicar un descuento del 10%
      Si el importe es mayor a $500 aplicar un descuento del 15%

      Hacer un programa donde se ingresa el importe original sin descuento y se informe por pantalla el importe con el descuento ya aplicado.
      Importante: Verifique que el programa emita UN SOLO CARTEL.
    */

   int importe, importe_final;

    cout << "Imgrese el importe de la venta: $";
    cin >> importe;

    if (importe < 100)
    {
        importe_final = importe - (importe * 0.05);
        cout << "Su importe final a pagar es: $" << importe_final << endl;
    }else if (importe <= 500)
    {
        importe_final = importe - (importe * 0.10);
        cout << "Su importe final a pagar es: $" << importe_final << endl;
    }else 
    {
        importe_final = importe - (importe * 0.15);
        cout << "Su importe final a pagar es: $" << importe_final << endl;
    }
    
    cout << endl << "--Fin del programa--" << endl;

    return 0;
}
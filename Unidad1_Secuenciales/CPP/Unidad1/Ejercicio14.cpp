#include <iostream>
using namespace std;

int main(){

    /**
    14 Hacer un programa para ingresar el importe de una compra y el descuento a aplicar. Listar por pantalla, el importe sin descuento, el descuento aplicado y el importe total a cobrar.
       Ejemplo: se ingresa importe 4500, descuento 40; se deberá mostrar
       Importe: 4500, Descuento: 1800, total: 2700.
    */

    int importe, descuento, importe_final;

    cout << "Proporcione el importe de la compra: $";
    cin >> importe;
    cout << "Proporcione el importe de descuento en porcentaje: ";
    cin >> descuento;
    cout << endl;

    descuento = importe * descuento / 100;
    importe_final = importe - descuento;

    cout << "Importe: $" << importe << ", Descuento: $" << descuento << ", Total: $" << importe_final << endl; 

    return 0;
}
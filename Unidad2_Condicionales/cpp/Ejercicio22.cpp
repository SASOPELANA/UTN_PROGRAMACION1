#include <iostream>
using namespace std;

int main(){

    /**
   22 Una fábrica de caramelos dispone de un presupuesto inicial para inaugurar su sucursal en Villa Brian Lara. 
      Se sabe que para producir caramelos tienen los siguientes costos:

      Costo de alquiler de $10000
      Costo por caramelo producido de $2.50
      Costo por mantenimiento cada 100 caramelos de $5000

      Dados el presupuesto inicial y la cantidad de caramelos a producir el primer mes, informar:
      "El presupuesto es suficiente para cubrir los costos de $XXXX"
      "El presupuesto no es suficiente, necesita un crédito de $XXXX"
    */

    int caramelos_producir, presupuesto;
    float costo_caramelo_producion, costo_mantenimiento, costo_total;

    cout << "Diguite la cantidad de caramelos a producir en el mes: " << endl;
    cin >> caramelos_producir;
    cout << "Diguite el presupuesto inicial: $";
    cin >> presupuesto;
    cout << endl;

    costo_caramelo_producion = caramelos_producir * 2.50;
    costo_mantenimiento = 5000 * (caramelos_producir / 100);
    costo_total = 10000 + costo_caramelo_producion + costo_mantenimiento;

    if (presupuesto >= costo_total){
        cout << "El presupuesto es suficiente para cubrir el total de los costos: $" << costo_total << endl;
    }else{
        costo_total = costo_total - presupuesto;
        cout << "El presupuesto no es suficiente, necesita un credito de: $" << costo_total << endl;
    }

    return 0;
}
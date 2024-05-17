/*
    17.  Una empresa registró las ventas que efectuó durante un día y para cada venta registró los siguientes datos:
    ● Número de Artículo Vendido (1 a 30)
    ● Cantidad de Unidades Vendidas
    ● Importe de la Venta
    El lote finaliza cuando se ingresa un registro con Número de Artículo igual a 0.
    En el lote anterior no aparecen registros de los artículos que por alguna razón no se hayan vendido durante el día. 
    Los registros están agrupados por número de artículo.
    Se pide determinar e informar:
    a) La recaudación total para cada uno de los artículos vendidos. Se informa 1 resultado para cada uno de los grupos.
    b) El número de artículo con mayor cantidad TOTAL de unidades vendidas.
*/
#include <iostream>
using namespace std;

int main(){

    int num_articulo, can_unidades = 0, importe_venta = 0, num_art_actual = 0; // variables, estrucutra, corte de control
    int acu_importe = 0; // Variable, punto A
    int max_venta = 0, articulo_maximo = 0, acu_unidades = 0; // Punto B

    cout << "Diguite el número de Articulo Vendido, o cero (0) para finalizar: " << endl;
    cin >> num_articulo;
    if(num_articulo != 0){
        cout << endl << "Grupo de Articulo --> " << num_articulo << endl;
        cout << "Diguite la Cantidad de Unidades Vendidas: " << endl;
        cin >> can_unidades;
        cout << endl << "Grupo de Articulo --> " << num_articulo << endl;
        cout << "Diguite el Importe de Venta" << endl;
        cin >> importe_venta;
    }
    
    
    while (num_articulo != 0)
    {
        num_art_actual = num_articulo; // Asignacion corte de control

        acu_importe = 0; // Punto A
        acu_unidades = 0; // Punto B
        while (num_art_actual == num_articulo) // Corte de control
        {
            // Punto A
            acu_importe += importe_venta;

            // Punto B
            acu_unidades += can_unidades;

            cout << "Diguite el número de Articulo Vendido, o cero (0) para finalizar: " << endl;
            cin >> num_articulo;
            if(num_articulo != 0){
                cout << endl << "Grupo de Articulo --> " << num_articulo << endl;
                cout << "Diguite la Cantidad de Unidades Vendidas: " << endl;
                cin >> can_unidades;
                cout << endl << "Grupo de Articulo --> " << num_articulo << endl;
                cout << "Diguite el Importe de Venta" << endl;
                cin >> importe_venta;
            }
        }
        // Punto A
        cout << endl << "---- PUNTO A ----" << endl;
        cout << "Grupo Articulo: " << num_art_actual << endl;
        cout << "Recaudacíon Total: " << acu_importe << endl;

        // Punto B
        if (acu_unidades > max_venta){
            max_venta = acu_unidades;
            articulo_maximo = num_art_actual;
        }

    }
    
    cout << endl << "---- PUNTO B ----" << endl;
    cout << "El número de Articulo con mayor cantidad vendidas: " << articulo_maximo << endl;

    return 0;
}
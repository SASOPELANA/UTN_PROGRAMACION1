/*
    18. Un supermercado tiene registrada la información de las ventas efectuadasdurante el mes pasado entre todas las s
    ucursales y se solicita un programa para obtener determinadas estadísticas.
    Los datos que se disponen por cada una de las ventas efectuadas son:
    ● Número de sucursal (1 a 30)
    ● Día de la venta (1 a 31)
    ● Importe de la venta
    ● Tipo de venta (1=Particular, 2=Obra Social)
    ● Forma de Pago (1=Débito, 2=Crédito, 3=Contado)
    Los datos están agrupados (no ordenados) por número de sucursal y puede haber varias ventas para la misma sucursal, 
    para el mismo día, etc. Puede haber sucursales sin ventas durante todo el mes o durante algunos días del mes, no
    habrá registros con importes iguales a 0. Al final de todo el lote se indicará con un registro con número de sucursal igual a 0.
    Se pide determinar e informar:
    a) Para cada una de las sucursales el porcentaje de recaudación total por sus ventas en crédito, débito y contado. 
    Se informan 3 resultados por cada sucursal.
    b) Indicar en cual sucursal se hizo el menor porcentaje de recaudación total por ventas de Tipo Obra Social. 
    Se informa 1 resultado al final.
    c) Para cada sucursal informar la primera y segunda venta individual de mayor importe. Se informan 2 resultados por sucursal.
    d) La venta de menor importe de todas las ventas, indicando la sucursal y el día de la venta. Se informan 3 resultados al final.
*/
#include <iostream>
using namespace std;

int main(){

    int num_sucursal, dia_venta = 0, importe_venta = 0, num_sucu_actual = 0; // Variables, estructura
    int tipo_venta = 0, forma_pago = 0; // Variable, estructura

    // Estructura
    cout << "Diguite el número de surucsal o cero(0) para finalizar: " << endl;
    cin >> num_sucursal;
    if(num_sucursal != 0){
        cout << "*** Surcursal Numero: " << num_sucursal << " ***" << endl;
        cout << "Diguite el dia de la venta (1 a 31): " << endl;
        cin >> dia_venta;
        cout << "*** Surcursal Numero: " << num_sucursal << " ***" << endl;
        cout << "Diguite el importe de la venta: " << endl;
        cin >> importe_venta;
        cout << "*** Surcursal Numero: " << num_sucursal << " ***" << endl;
        cout << "Indique el tipo de venta, (1 = Particular. 2 = Obra Social.): " << endl;
        cin >> tipo_venta;
        switch (tipo_venta)
        {
        case 1: cout << "Particular." << endl;
        
            break;
        case 2: cout << "Obra Social."  << endl;   
    
            break;
        default:
            break;
        }
        cout << "*** Surcursal Numero: " << num_sucursal << " ***" << endl;
        cout << "Indique la Forma de Pago (1 = Débito. 2 = Crédito. 3 = Contado): " << endl;
        cin >> forma_pago;
        switch (forma_pago)
        {
        case 1: cout << "Débito." << endl;
        
            break;
        case 2: cout << "Crédito." << endl;

            break;
        case 3: cout << "Contado." << endl;

            break;
    
        default:
            break;
        }
    } // Fin de Estructura
    
    while (num_sucursal != 0)
    {
        num_sucu_actual = num_sucursal; // Asignacion corte de control

        while (num_sucursal == num_sucu_actual) // Corte de Control
        {
            



            
            // Estructura
            cout << "Diguite el número de surucsal o cero(0) para finalizar: " << endl;
            cin >> num_sucursal;
            if(num_sucursal != 0){
            cout << "*** Surcursal Numero: " << num_sucursal << " ***" << endl;
            cout << "Diguite el dia de la venta (1 a 31): " << endl;
            cin >> dia_venta;
            cout << "*** Surcursal Numero: " << num_sucursal << " ***" << endl;
            cout << "Diguite el importe de la venta: " << endl;
            cin >> importe_venta;
            cout << "*** Surcursal Numero: " << num_sucursal << " ***" << endl;
            cout << "Indique el tipo de venta, (1 = Particular. 2 = Obra Social.): " << endl;
            cin >> tipo_venta;
            switch (tipo_venta)
            {
            case 1: cout << "Particular." << endl;
            
                break;
            case 2: cout << "Obra Social."  << endl;   
        
                break;
            default:
                break;
            }
            cout << "*** Surcursal Numero: " << num_sucursal << " ***" << endl;
            cout << "Indique la Forma de Pago (1 = Débito. 2 = Crédito. 3 = Contado): " << endl;
            cin >> forma_pago;
            switch (forma_pago)
            {
            case 1: cout << "Débito." << endl;
            
                break;
            case 2: cout << "Crédito." << endl;

                break;
            case 3: cout << "Contado." << endl;

                break;
        
            default:
                break;
            }
          } // Fin Estructura
        }
        

    }
    



    return 0;
}
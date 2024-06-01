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

    int num_sucursal = 0, num_sucu_actual = 0; // Estructura
    int dia_venta = 0;  // Estructura
    float importe_venta = 0; // Estructura
    int tipo_venta = 0, forma_pago = 0; // Estructura
    // Punto A
    float total_venta = 0;
    float acu_impo_debito = 0, acu_impo_credito = 0, acu_impo_contado = 0;
    float por_reca_debito = 0, por_reca_credito = 0, por_reca_conta = 0;
    // Punto B
    float importeTotalObraSocial = 0, porcentaje_obraSocial = 0, porcentaje_obra_minimo = 0, importe_total_obra = 0;
    bool bandera_obraSocial = false;
    int sucursal_obra_minimo = 0;
 
    cout << "Digite el número de sucursal (1 a 30) o cero (0) para finalizar; " << endl;
    cin >> num_sucursal;

    while (num_sucursal != 0)
    {
        num_sucu_actual = num_sucursal; // Asignacion corte de control
        // Punto A
        total_venta = 0;
        acu_impo_contado = 0;
        acu_impo_credito = 0;
        acu_impo_debito = 0;
        // Punto B
        importeTotalObraSocial = 0;

        while (num_sucursal == num_sucu_actual) // Corte de control
        {
            cout << endl << " -- Sucursal -> " << num_sucu_actual << " --"<< endl;
            cout << "Digite el dia de venta (1 - 31)" << endl;
            cin >> dia_venta;
            cout << "Digite el importe de venta $: " << endl;
            cin >> importe_venta;
            cout << "Digite el Tipo de Venta (1=Particular, 2 =Obra Social.) " << endl;
            cin >> tipo_venta;
            switch (tipo_venta)
            {
            case 1: cout << " ** Particular ** " << endl;

                break;
            case 2: cout << " ** Obra Social **" << endl;
                importeTotalObraSocial += importe_venta;
                break;   
            default:
                cout << "Opcíon no Valida."  << endl;  
                break;
            }
            cout << "Ingrese la forma de pago (1=Débito, 2=Crédito, 3=Contado): " << endl;
            cin >> forma_pago;
            switch (forma_pago)
            {              
            case 1: cout << " -- Débito --" << endl;
                acu_impo_debito += importe_venta;

                break;
            case 2: cout << " -- Crédito -- " << endl;
                acu_impo_credito += importe_venta;

                break;
            case 3: cout << " -- Contado --" << endl;
                acu_impo_contado += importe_venta;

                break;   
            
            default:
                cout << "Opcíon no valida. " << endl;
                break;
            }
            total_venta += importe_venta;



            cout << endl << " ---------------------------------- " << endl;

            cout << "Digite el número de sucursal (1 a 30) o cero (0) para finalizar; " << endl;
            cin >> num_sucursal;
        }

        // Punto A
         if (total_venta > 0) {
            por_reca_debito = (acu_impo_debito / total_venta) * 100;
            por_reca_credito = (acu_impo_credito / total_venta) * 100;
            por_reca_conta = (acu_impo_contado / total_venta) * 100;
        }
        cout << "Sucursal " << num_sucu_actual << ". Porcentaje reacudación total ventas: " << endl;
        if (acu_impo_debito > 0){
            cout << "Debito: " << por_reca_debito << "%"<< endl;
        }else{
            cout << "Sin Ventas en Debito." << endl;
        }
        if (acu_impo_credito > 0){
            cout << "Credito: " << por_reca_credito << "%" << endl;
        }else{
            cout << "Sin Ventas en Credito." << endl;
        }
        if (acu_impo_contado > 0){
            cout << "Contado: " << por_reca_conta << "%" << endl;
        }else{
            cout << "Sin Ventas en Contado." << endl;
        }

        // Punto B
        if (total_venta > 0) {
            porcentaje_obraSocial = (importeTotalObraSocial / total_venta) * 100;
            if (!bandera_obraSocial) {
                porcentaje_obra_minimo = porcentaje_obraSocial;
                sucursal_obra_minimo = num_sucu_actual;
                bandera_obraSocial = true;
            }else if (porcentaje_obraSocial < porcentaje_obra_minimo) {
                porcentaje_obra_minimo = porcentaje_obraSocial;
                sucursal_obra_minimo = num_sucu_actual;
            }
        }
        

        
    }
    
    // Punto B
    if (bandera_obraSocial){
        cout << "Surcursal con menor porcentaje de ventas en Tipo Obra Social: " << sucursal_obra_minimo << endl;
    }else{
        cout << "Sin ventas de Tipo Obra Social." << endl;
    }
       
    

    return 0;
}
#include <iostream>
using namespace std;

int main(){

    //  Punto A
    // Estructura
    int num_articulo, num_act_articulo = 0, dia = 0, can_art_vendidas = 0;
    float precio_costo = 0, precio_venta = 0;
    // Punto A
    int numero_art_maximo = 0;
    float ganancia_actual = 0, ganancia_maxima = 0;
    // Punto B
    int quincenaUno = 0, quincenaDos = 0;
    // Punto C
    int primera_semana = 0, total_ventas = 0;
    float porcentaje_pri_semana = 0;
    // Punto D
    int ventas_art5_dia16 = 0;
    
    cout << "Digite el número de Articulo (1 a 10)" << endl;
    cin >> num_articulo;

    while (num_articulo != 0)
    {
        num_act_articulo = num_articulo; // ASIGNACION CORTE DE CONTROL

        ganancia_actual = 0; 

        while (num_articulo == num_act_articulo) // CORTE DE CONTROL
        {
            cout << endl << " ---- ARTICULO -- > " << num_act_articulo << endl;
            cout << "Digite el dia (1 a 31)" << endl;
            cin >> dia;
            cout << "Digite la cantidad de Articulos vendidos: " << endl;
            cin >> can_art_vendidas;
            cout << "Digite el precio del costo: " << endl;
            cin >> precio_costo;
            cout << "Digite el precio de la venta: " << endl;
            cin >> precio_venta;

            // Punto A
            ganancia_actual += (precio_venta - precio_costo) * can_art_vendidas;

            if (ganancia_actual > ganancia_maxima){
                ganancia_maxima = ganancia_actual;
                numero_art_maximo = num_act_articulo;
            }

            // Punto B
            if (can_art_vendidas > 0){
                if(dia > 0 && dia <= 15){
                    quincenaUno += can_art_vendidas;
                }else if(dia <= 31){
                    quincenaDos += can_art_vendidas;
                }
            }

            // Punto C
	        if (can_art_vendidas > 0){
	   	        if(dia > 0 && dia <= 7){
		        primera_semana++;
		        }
		        total_ventas++;
	        }
           
            // Punto D
            if (can_art_vendidas == 5 && dia == 16){
                ventas_art5_dia16++;
            }

            cout << "Digite el número de Articulo (1 a 10): " << endl;
            cin >> num_articulo;

        }
        
    }
    
    cout << endl << "Punto A" << endl;
    cout << "El número de Articulo con mas ganancias: " << numero_art_maximo << endl;

    cout << endl << "Punto B" << endl;
    if(quincenaUno > 0){
        cout << "Articulos vendidos en la primera quincena: " << quincenaUno << endl;
    }
    if (quincenaDos > 0){
        cout << "Articulos vendidos en la segunda quincena: " << quincenaDos << endl;
    }

    cout << endl << "Punto C" << endl;
    if (primera_semana > 0){
        porcentaje_pri_semana = (float)(primera_semana) / total_ventas * 100;
        cout << "Porecntaje de ventas en la primera semana del mes: " << porcentaje_pri_semana << "%. "<< endl;
    }

    cout << endl << "Punto D" << endl;
    if(ventas_art5_dia16 > 0){
        cout << "Cantidad de ventas del Articulo 5, dia 16 del mes: " << ventas_art5_dia16 << endl;
    }else{
        cout << "No se registraron ventas del Articulo 5, dia 16. " << endl;
    }

    cout << endl << "--- FIN DEL PROGRAMA ---" << endl;

    return 0;
}

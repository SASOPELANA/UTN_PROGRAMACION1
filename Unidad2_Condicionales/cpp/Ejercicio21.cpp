#include <iostream>
using namespace std;

int main()
{
    /*
    21 Una marroquinería dispone de 45 carteras blancas, 50 carteras negras, 40 marrones y 49 grises. Se pide hacer un programa donde se ingresen tres ventas. Cada venta está compuesta por:

       Cantidad de carteras
       Tipo de cartera (1 - Blanco, 2 - Negro, 3- Marrón, 4 - Gris)

       Calcular e informar:
       Cantidad total de carteras vendidas en total.
       Cuántas carteras quedaron de cada tipo.
       Los colores de carteras que no se vendieron.
       NOTA: Ninguna venta superará las 10 carteras.
    */

    int tipo_carteras, cantidad_vendidad = 0, cantidad_blanca = 0, cantidad_negro = 0, cantidad_marron = 0, cantidad_gris = 0, tipo1, tipo2, tipo3, tipo4;
    int venta_carteras_blanca, venta_carteras_negra, venta_carteras_marron, venta_carteras_gris;

    // Primera venta
    cout << "Ingrese la opcion de la primera venta de carteras: (1 - Blanco, 2 - Negro, 3 - Marrón, 4 - Gris). " << endl;
    cin >> tipo_carteras;

    switch (tipo_carteras)
    {
    case 1:
        cout << "1. Cartera Blanca. " << endl;
        cout << "Diguite la cantidad de carteras blancas a llevar. Maximo 3 productos: " << endl;
        cin >> venta_carteras_blanca;
        cantidad_vendidad += venta_carteras_blanca;
        cantidad_blanca += venta_carteras_blanca;
        break;
    case 2:
        cout << "2. Cartera Negra. " << endl;
        cout << "Diguite la cantidad de carteras negras a llevar. Maximo 3 productos: " << endl;
        cin >> venta_carteras_negra;
        cantidad_vendidad += venta_carteras_negra;
        cantidad_negro += venta_carteras_negra;
        break;
    case 3:
        cout << "3. Cartera Marrón. " << endl;
        cout << "Diguite la cantidad de carteras marron a llevar. Maximo 3 productos: " << endl;
        cin >> venta_carteras_marron;
        cantidad_vendidad += venta_carteras_marron;
        cantidad_marron += venta_carteras_marron;
        break;
    case 4:
        cout << "4. Cartera Gris. " << endl;
        cout << "Diguite la cantidad de carteras grises a llevar. Maximo 3 productos: " << endl;
        cin >> venta_carteras_gris;
        cantidad_vendidad += venta_carteras_gris;
        cantidad_gris += venta_carteras_gris;
        break;
    default:
        cout << "Opcion no valida. " << endl;
        break;
    }

    // Segunda Venta
    cout << "Ingrese la segunda opcion de ventas de carteras: (1 - Blanco, 2 - Negro, 3 - Marrón, 4 - Gris). " << endl;
    cin >> tipo_carteras;

    switch (tipo_carteras)
    {
    case 1:
        cout << "1. Cartera Blanca. " << endl;
        cout << "Diguite la cantidad de carteras blancas a llevar. Maximo 3 productos: " << endl;
        cin >> venta_carteras_blanca;
        cantidad_vendidad += venta_carteras_blanca;
        cantidad_blanca += venta_carteras_blanca;
        break;
    case 2:
        cout << "2. Cartera Negra. " << endl;
        cout << "Diguite la cantidad de carteras negras a llevar. Maximo 3 productos: " << endl;
        cin >> venta_carteras_negra;
        cantidad_vendidad += venta_carteras_negra;
        cantidad_negro += venta_carteras_negra;
        break;
    case 3:
        cout << "3. Cartera Marrón. " << endl;
        cout << "Diguite la cantidad de carteras marron a llevar. Maximo 3 productos: " << endl;
        cin >> venta_carteras_marron;
        cantidad_vendidad += venta_carteras_marron;
        cantidad_marron += venta_carteras_marron;
        break;
    case 4:
        cout << "4. Cartera Gris. " << endl;
        cout << "Diguite la cantidad de carteras grises a llevar. Maximo 3 productos: " << endl;
        cin >> venta_carteras_gris;
        cantidad_vendidad += venta_carteras_gris;
        cantidad_gris += venta_carteras_gris;
        break;
    default:
        cout << "Opcion no valida. " << endl;
        break;
    }

    // Tercera venta
    cout << "Ingrese la tercera opcion de ventas de carteras: (1 - Blanco, 2 - Negro, 3 - Marrón, 4 - Gris). " << endl;
    cin >> tipo_carteras;

    switch (tipo_carteras)
    {
    case 1:
        cout << "1. Cartera Blanca. " << endl;
        cout << "Diguite la cantidad de carteras blancas a llevar. Maximo 3 productos: " << endl;
        cin >> venta_carteras_blanca;
        cantidad_vendidad += venta_carteras_blanca;
        cantidad_blanca += venta_carteras_blanca;
        break;
    case 2:
        cout << "2. Cartera Negra. " << endl;
        cout << "Diguite la cantidad de carteras negras a llevar. Maximo 3 productos: " << endl;
        cin >> venta_carteras_negra;
        cantidad_vendidad += venta_carteras_negra;
        cantidad_negro += venta_carteras_negra;
        break;
    case 3:
        cout << "3. Cartera Marrón. " << endl;
        cout << "Diguite la cantidad de carteras marron a llevar. Maximo 3 productos: " << endl;
        cin >> venta_carteras_marron;
        cantidad_vendidad += venta_carteras_marron;
        cantidad_marron += venta_carteras_marron;
        break;
    case 4:
        cout << "4. Cartera Gris. " << endl;
        cout << "Diguite la cantidad de carteras grises a llevar. Maximo 3 productos: " << endl;
        cin >> venta_carteras_gris;
        cantidad_vendidad += venta_carteras_gris;
        cantidad_gris += venta_carteras_gris;
        break;
    default:
        cout << "Opcion no valida. " << endl;
        break;
    }

    if (cantidad_vendidad > 10)
    {
        cout << "Usted supera los 10 articulos de venta como maximo a llevar. Venta no realizada." << endl;
    }else{
        
        cout << "Cantidad total de carteras vendidas en total es: " << cantidad_vendidad << endl;
        tipo1 = 45 - cantidad_blanca;
        tipo2 = 50 - cantidad_negro;
        tipo3 = 40 - cantidad_marron;
        tipo4 = 49 - cantidad_gris;
        cout << "Las carteras que quedaron son: Tipo blanca: " << tipo1 << ", Tipo negro: " << tipo2 << ", Tipo marrón: " << tipo3 << ", Tipo gris: " << tipo4 << endl;

        if (cantidad_blanca == 0){
            cout << "El color de la cartera que no se vendio es el Blanco." << endl;
        }
        if (cantidad_negro == 0){
            cout << "El color de la cartera que no se vendio es el Negro." << endl;
        }
        if (cantidad_marron == 0){
            cout << "El color de la cartera que no se vendio es el Marrón." << endl;
        }
        if (cantidad_gris == 0){
            cout << "El color de la cartera que no se vendio es el Gris." << endl;
        }
    }

    cout << endl << "--Fin del programa--" << endl;

    return 0;
}
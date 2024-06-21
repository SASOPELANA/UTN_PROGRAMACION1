#include <iostream>
#include "funciones.h"
using namespace std;

void ElegirOpcion(int &opcion){

    string p1, p2;

     switch (opcion)
        {
        case 1:

            cout << "1 _ JUGAR" << endl;
            iniciarJuego();

            break;

        case 2:

            cout << "2 _ ESTADÖSTICAS" <<  endl;
            mostrarEstadisticas();

            break;

        case 3:

            cout << "3 _ CRDITOS" << endl;
            mostrarCreditos();

            break;

        case 0:

            cout << "Saliendo del juego." << endl;
            
            break;    

        default:
            if(opcion != -1){
                cout << "Opci¢n no valida." << endl;
            }

            break;
        }
}
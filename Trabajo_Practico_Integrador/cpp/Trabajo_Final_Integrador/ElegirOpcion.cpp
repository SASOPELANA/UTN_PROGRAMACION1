#include <iostream>
#include "funcion.h"
using namespace std;

void ElegirOpcion(int opcion){

    string p1, p2;

     switch (opcion)
        {
        case 1:

            cout << "1 _ JUGAR" << endl;

            PedirNombre(p1, p2);

            break;

        case 2:

            cout << "2 _ ESTADÍSTICAS" <<  endl;

            break;

        case 3:

            cout << "3 _ CRÉDITOS" << endl;

            break;

        default:
            if(opcion != -1){
                cout << "Opción no valida." << endl;
            }

            break;
        }
}

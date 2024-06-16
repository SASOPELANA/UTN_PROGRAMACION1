#include <iostream>
#include "funcion.h"
using namespace std;

void PedirNombre(string &pj1, string &pj2){

    char J;

    system("cls");
    cout << "EMBAUCADO" << endl;
    cout << "------------------------------------------------------------------------" << endl;
    cout << "Antes de comenzar deben registrar sus nombres: " << endl;
    cout << endl << "¿Nombre del Jugador 1? ";
    cin >> pj1;
    cout << endl << "¿Nombre del Jugador 2? ";
    cin >> pj2;
    cout << endl << "¿Confirmar nombres? (S/N) " << endl;
    cin >> J;
    if (J == 'S' || J == 's' ){
       cout << "RONDA #1" << endl;
       // quiero poner una funcion para jugar aqui
    }else if (J == 'N' || J == 'n'){
        return PedirNombre(pj1, pj2);
    }else{
        cout << "Opcíon no valida, ingrese los datos de nuevo." << endl;
        system("pause");
        return PedirNombre(pj1, pj2);
    }

    cout << endl << "------------------------------------------------------------------------" << endl;
}


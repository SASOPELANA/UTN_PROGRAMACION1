#include <iostream>
#include "funcion.h"
using namespace std;

int Cartas(){

    int carta, puntos;
    string nombre, cart_1;
    carta = (rand() % 20) + 1;

    ObtenerNaipe(carta, puntos, nombre, cart_1);

    return carta;
}


void ObtenerNaipe(int carta, int &puntos, string &nombre, string &cart_1) {
    int palo = (carta - 1) / 5;
    int valores = (carta - 1) % 5;

    switch (palo) {
        case 0:
            nombre = "Corazón";
            break;
        case 1:
            nombre = "Diamante";
            break;
        case 2:
            nombre = "Pica";
            break;
        case 3:
            nombre = "Trébol";
            break;
    }

    switch (valores) {
        case 0:
            puntos = 10;
            cart_1 = "10";
            break;
        case 1:
            puntos = 11; // J
            cart_1 = "J";
            break;
        case 2:
            puntos = 12; // Q
            cart_1 = "Q";
            break;
        case 3:
            puntos = 15; // K
            cart_1 = "K";
            break;
        case 4:
            puntos = 20;  // A
            cart_1 = "A";
            break;
    }

}

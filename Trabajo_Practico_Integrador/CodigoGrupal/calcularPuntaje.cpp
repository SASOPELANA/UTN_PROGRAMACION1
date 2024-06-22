// Aqui se agrego dos funcione:
// calcularPuntaje(int cartas[], string CartaEmba)
// void mostrarResultadosFinales(int puntosJugador1, int puntosJugador2, string jugador1, string jugador2)

#include <iostream>
#include "funciones.h"
using namespace std;

int calcularPuntaje(int cartas[], string CartaEmba) {
int puntaje = 0;
for (int i = 0; i < 5; i++) {
    string palo;
    int puntos;
    string nombreCarta = ObtenerCarta(cartas[i], puntos, palo);
    if (palo != CartaEmba) {
        puntaje += puntos;
        }
   }
    return puntaje;
}

//resultados finales
void mostrarResultadosFinales(int puntosJugador1, int puntosJugador2, string jugador1, string jugador2) {
cout << "------------------------------------------------------------------------" << endl;
cout << "Resultados Finales:" << endl;
cout << jugador1 << ": " << puntosJugador1 << " puntos" << endl;
cout << jugador2 << ": " << puntosJugador2 << " puntos" << endl;
cout << "------------------------------------------------------------------------" << endl;

    if (puntosJugador1 > puntosJugador2) {
    cout << "Ganador: " << jugador1 << endl;
    } else if (puntosJugador2 > puntosJugador1){
        cout << "Ganador: " << jugador2 << endl;
    } else {
        cout << "El juego termina en empate." << endl;
    }
}
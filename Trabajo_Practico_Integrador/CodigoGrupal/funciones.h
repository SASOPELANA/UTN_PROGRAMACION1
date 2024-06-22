#pragma once

void VerMenu();
void ElegirOpcion(int &opcion);
void iniciarJuego();
void mostrarCreditos();
void mostrarEstadisticas();
bool verificar(int n, int num[]);
std::string ObtenerCarta(int carta, int &puntos, std::string &palo);
std::string cartaEmbaucadora();
int calcularPuntaje(int cartas[], std::string CartaEmba);
void mostrarResultadosFinales(int puntosJugador1, int puntosJugador2, std::string jugador1, std::string jugador2);
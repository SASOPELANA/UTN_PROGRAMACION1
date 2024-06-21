#include <iostream>
#include "funciones.h"

using namespace std;

void iniciarJuego(){

    cout << "Funci¢n para iniciar el Juego. " << endl;

    int num[10];
    int puntos = 0;
    int n = 0;
    string palo;
    string nombreCarta;
    string CartaEmba;
 
    system("cls");  // Limpiar consola en Windows 
    // system("clear"); // Limpia consola en Linux
    cout << "EMBAUCADO" << endl;
    cout << "------------------------------------------------------------------------" << endl;
    cout << endl << "Jugador 1: " << endl;
    cout << endl;
    for(int i=0; i<5; i++)
    {
        do {
            n = 1 + rand() % 20;
        } while(verificar(n, num)); // Verifica
        num[i] = n; // Almacena el n£mero en el vector
        nombreCarta = ObtenerCarta(n, puntos, palo); // detalles de la carta
        cout << nombreCarta << " de " << palo << " --> " << puntos << endl;
    }
 
    cout << endl << "Jugador 2: " << endl;
    cout << endl;
    for(int i=5; i<10; i++)
    {
        do {
            n = 1 + rand() % 20; 
        } while(verificar(n, num)); 
        num[i] = n; 
        nombreCarta = ObtenerCarta(n, puntos, palo);
        cout << nombreCarta << " de " << palo << " --> " << puntos << endl;
    }
 
    cout << endl;
    CartaEmba = cartaEmbaucadora();
    cout << "Embaucadora: " << CartaEmba << endl; 
    cout << endl;
    cout << endl << "------------------------------------------------------------------------" << endl;

}



// Funcion para verificar n£meros repetidos.
bool verificar(int n, int num[]){ 
    for(int i=0; i<10; i++){
        if(n == num[i]){
            return true;
        }
    }  
    return false;               
}
 

// Funcion para obtener cartas y sus valores.
string ObtenerCarta(int carta, int &puntos, string &palo){
    string nombre;
    string palos[4] = {"Corazones", "Diamantes", "Picas", "Tr‚bol" };
    string valores[5] = {"10", "J", "Q", "K", "A"};
    int puntosValores[5] = {10, 11, 12, 15, 20};
 
    int valorCarta = (carta - 1) % 5;  // Resultado entre 0 y 4
    int paloCarta = (carta - 1) / 5;   // Resultado entre 0 y 3
 
    nombre = valores[valorCarta];  
    palo = palos[paloCarta];     
    puntos = puntosValores[valorCarta];  
 
    return nombre;  
}

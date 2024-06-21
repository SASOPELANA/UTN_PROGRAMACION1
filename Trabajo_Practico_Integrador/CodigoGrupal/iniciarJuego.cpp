#include <iostream>

#include "funciones.h"

using namespace std;



void iniciarJuego(){

    string jugador1, jugador2;

    char confirmar;



    do {

        cout << "Antes de comenzar deben registrar sus nombres:" << endl;

        cout << "¨Nombre del Jugador 1? ";

        cin >> jugador1;

        cout << "¨Nombre del Jugador 2? ";

        cin >> jugador2;



        cout << "¨Confirmar nombres? (S/N) ";

        cin >> confirmar;



        if (confirmar != 'S' && confirmar != 's') {

            cout << "Reiniciando registro de nombres." << endl;

        }

    } while (confirmar != 'S' && confirmar != 's');



    int num[10];

    bool jugador1Sacrifico = false, jugador2Sacrifico = false;



    for (int ronda = 1; ronda <= 3; ronda++){

        cout << "Ronda #" << ronda << endl;

        cout << "------------------------------------------------------------------------" << endl;



        for (int i = 0; i < 10; i++) num[i] = 0;



        cout << endl << jugador1 << ": " << endl;

        for(int i = 0; i < 5; i++){

            int n;

            do {

                n = 1 + rand() % 20;

            } while(verificar(n, num));

            num[i] = n;

            string palo;

            int puntos;

            string nombreCarta = ObtenerCarta(n, puntos, palo);

            cout << nombreCarta << " de " << palo << " --> " << puntos << endl;

        }



        cout << endl << jugador2 << ": " << endl;

        for(int i = 5; i < 10; i++){

            int n;

            do {

                n = 1 + rand() % 20;

            } while(verificar(n, num));

            num[i] = n;

            string palo;

            int puntos;

            string nombreCarta = ObtenerCarta(n, puntos, palo);

            cout << nombreCarta << " de " << palo << " --> " << puntos << endl;

        }



        string CartaEmba = cartaEmbaucadora();

        cout << "Embaucadora: " << CartaEmba << endl;



        if (ronda > 1){

            char opcion;

            cout << jugador1 << ", ¨deseas modificar la carta embaucadora actual (" << CartaEmba << ")? (S/N): ";

            cin >> opcion;

            if(opcion == 'S' || opcion == 's'){

                jugador1Sacrifico = true;

                CartaEmba = cartaEmbaucadora();

                cout << "Nueva carta embaucadora: " << CartaEmba << endl;

            } else {

                cout << jugador2 << ", ¨deseas modificar la carta embaucadora actual (" << CartaEmba << ")? (S/N): ";

                cin >> opcion;

                if(opcion == 'S' || opcion == 's'){

                    jugador2Sacrifico = true;

                    CartaEmba = cartaEmbaucadora();

                    cout << "Nueva carta embaucadora: " << CartaEmba << endl;

                }

            }

        }

    }

}



// Funci¢n para verificar n£meros repetidos.

bool verificar(int n, int num[]){ 

    for(int i=0; i<10; i++){

        if(n == num[i]){

            return true;

        }

    }  

    return false;               

}

 

// Funci¢n para obtener cartas y sus valores.

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


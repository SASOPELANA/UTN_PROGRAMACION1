#include <iostream>
#include "funciones.h"
using namespace std;

void iniciarJuego(){

    string jugador1, jugador2;

    char confirmar;

    string CartaEmba;

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

    // Declarmaos variables para la funcion mostrarResultadosFinales
    int puntosJugador1 = 0, puntosJugador2 = 0;

    bool jugador1Sacrifico = false, jugador2Sacrifico = false;

    // Declarar variables para cada ronda por jugador.
    int puntosRondasJugador1 = 0, puntosRondasJugador2 = 0;

    for (int ronda = 1; ronda <= 3; ronda++){

        if(ronda == 1){
            CartaEmba = cartaEmbaucadora();
        }
        
        system("cls");

        cout << "EMBAUCADOR " << endl;
        cout << "------------------------------------------------------------------------" << endl;
        cout << endl << "Ronda #" << ronda << endl;
        cout << jugador1 << " VS " << jugador2 << endl;
        cout << endl << "------------------------------------------------------------------------" << endl;



        for (int i = 0; i < 10; i++) num[i] = 0;



        cout << endl << jugador1 << " (" << puntosRondasJugador1 << " puntos)" << endl;
        puntosRondasJugador1 = 0; // Reiniciando puntos por rondas. Jugador 1
        for(int i = 0; i < 5; i++){

            int n;

            do {

                n = 1 + rand() % 20; // Genera n£meros al azar entre 1 y 20

            } while(verificar(n, num)); // Verifica si el N£mero ya fue generado.

            num[i] = n; // Almacena el n£mero una vez que se verifico si ya fue generado.

            string palo;

            int puntos;

            string nombreCarta = ObtenerCarta(n, puntos, palo); // Obtener carta y puntos
            cout << "     " << nombreCarta << " " << palo << ". Puntos --> " << puntos << endl;


        }

        

        cout << endl << jugador2 << " (" << puntosRondasJugador2 << " puntos)"  << endl;
        puntosRondasJugador2 = 0; // Reiniciando puntos por rondas. Jugador 2
        for(int i = 5; i < 10; i++){

            int n;

            do {

                n = 1 + rand() % 20;

            } while(verificar(n, num));

            num[i] = n;

            string palo;

            int puntos;

            string nombreCarta = ObtenerCarta(n, puntos, palo);
            cout << "     " << nombreCarta << " " << palo << ". Puntos --> " << puntos << endl;


        }

        cout << endl;

        
        cout << "Embaucadora: " << CartaEmba << endl;
    

        puntosJugador1 += calcularPuntaje(num, CartaEmba);
        puntosJugador2 += calcularPuntaje(num + 5, CartaEmba);

        puntosRondasJugador1 = puntosJugador1;
        puntosRondasJugador2 = puntosJugador2;

        cout << endl;
        mostrarResultadosFinales(puntosJugador1, puntosJugador2, jugador1, jugador2);
        

        if (ronda > 0 && ronda < 3){     // ronda >= 1

            char opcion;

            cout << jugador1 << ", ¨Deseas modificar la carta embaucadora actual (" << CartaEmba << ")? Se le descontara 20 puntos (S/N): ";
            
            cin >> opcion;

            cout << endl; // borrar si es nesesario
            system("pause"); // borrar  
            system("cls"); // borrar

            if(opcion == 'S' || opcion == 's'){

                jugador1Sacrifico = true;

                if(jugador1Sacrifico){ // Sacrifica 20 puntos si acepto cambair la carta embaucadora
                    puntosJugador1 -= 20;
                    jugador1Sacrifico = false;
                }

                CartaEmba = cartaEmbaucadora();

                cout << "Nueva carta embaucadora: " << CartaEmba << endl;

            } 

            cout << jugador2 << ", ¨Deseas modificar la carta embaucadora actual (" << CartaEmba << ")? Se le descontara 20 puntos (S/N): ";

            cin >> opcion;

            if(opcion == 'S' || opcion == 's'){

            jugador2Sacrifico = true;

            if(jugador2Sacrifico){ // Sacrifica 20 puntos si acepto cambair la carta embaucadora
                puntosJugador2 -= 20;
                jugador2Sacrifico = false;
            }

            CartaEmba = cartaEmbaucadora();

            cout << "Nueva carta embaucadora: " << CartaEmba << endl;

            }

            
        }else{
            system("pause");
            system("cls");
            VerMenu();
            int opcion = -1;
            return ElegirOpcion(opcion);
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
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

        cout << endl << "         --- " << jugador1  << " --- " << endl;
        for(int i = 0; i < 5; i++){

            int n;

            do {

                n = 1 + rand() % 20; // Genera n£meros al azar entre 1 y 20

            } while(verificar(n, num)); // Verifica si el N£mero ya fue generado, con la funcion verificar

            num[i] = n; // Almacena el n£mero una vez que se verifico que no esta repetido.

            string palo;

            int puntos;

            string nombreCarta = ObtenerCarta(n, puntos, palo); // Obtener carta y puntos
            cout << "     " << nombreCarta << " " << palo << ". Puntos --> " << puntos << endl; // Muestra las cartas para el jugador 1


        }

        cout << endl << "         --- " << jugador2  << " --- " << endl;
        for(int i = 5; i < 10; i++){

            int n;

            do {

                n = 1 + rand() % 20; // Gnerea un numero al azar entre 1 y 20

            } while(verificar(n, num)); // Verifica si el N£mero ya fue generado, con la funcion verificar

            num[i] = n; // Guarda el numero que esta repetido

            string palo;

            int puntos;

            string nombreCarta = ObtenerCarta(n, puntos, palo);
            cout << "     " << nombreCarta << " " << palo << ". Puntos --> " << puntos << endl; // Muestra las cartas para el jugador 1


        }

        cout << endl;

        
        cout << "Embaucadora: " << CartaEmba << endl; 
    
        // Puntos por rondas
        puntosRondasJugador1 = calcularPuntaje(num, CartaEmba);
        puntosRondasJugador2 = calcularPuntaje(num + 5, CartaEmba);

        // Acumular el total de puntos de todas las rondas
        puntosJugador1 += puntosRondasJugador1;
        puntosJugador2 += puntosRondasJugador2; 

        cout << endl;
        mostrarResultadosFinales(puntosJugador1, puntosJugador2, jugador1, jugador2);
        

        if (ronda < 3){     

            char opcion;

             // Segunda Ronda, pregunta primero al jugador 1 si quiere cambiar la carta embaucadora.
            if(ronda == 1){
                
                cout << endl; // borrar si es nesesario
                system("pause"); // borrar  
                system("cls"); // borrar
                cout << jugador1 << ", ¨Deseas modificar la carta embaucadora actual (" << CartaEmba << ")? Se le descontara 20 puntos (S/N): ";
            
                cin >> opcion;

                if(opcion == 'S' || opcion == 's'){

                    jugador1Sacrifico = true;

                    if(jugador1Sacrifico){ // Sacrifica 20 puntos si acepto cambair la carta embaucadora
                        puntosJugador1 -= 20;
                        jugador1Sacrifico = false;
                    }

                    CartaEmba = cartaEmbaucadora();

            
                    cout << endl <<" ************************************************ " << endl;
                    cout << "         Nueva carta embaucadora: " << CartaEmba  << "        "<< endl;
                    cout <<" ************************************************ " << endl;
                    cout << endl;
                    system("pause");

                }else{
                    cout << endl << jugador2 << ", ¨Deseas modificar la carta embaucadora actual (" << CartaEmba << ")? Se le descontara 20 puntos (S/N): ";

                    cin >> opcion;

                    if(opcion == 'S' || opcion == 's'){

                    jugador2Sacrifico = true;

                    if(jugador2Sacrifico){ // Sacrifica 20 puntos si acepto cambair la carta embaucadora
                        puntosJugador2 -= 20;
                        jugador2Sacrifico = false;
                    }

                    CartaEmba = cartaEmbaucadora();

                    cout << endl <<" ************************************************ " << endl;
                    cout << "         Nueva carta embaucadora: " << CartaEmba  << "        "<< endl;
                    cout <<" ************************************************ " << endl;
                    cout << endl;
                    system("pause");

                    }

                }

               
            }
            
            // Tercera Ronda, pregunta primero al jugador 2 si quiere cambiar la carta embaucadora.
            if(ronda == 2){
                
                cout << endl; // borrar si es nesesario
                system("pause"); // borrar  
                system("cls"); // borrar
                cout << jugador2 << ", ¨Deseas modificar la carta embaucadora actual (" << CartaEmba << ")? Se le descontara 20 puntos (S/N): ";
            
                cin >> opcion;

                if(opcion == 'S' || opcion == 's'){

                    jugador2Sacrifico = true;

                    if(jugador2Sacrifico){ // Sacrifica 20 puntos si acepto cambair la carta embaucadora
                        puntosJugador2 -= 20;
                        jugador2Sacrifico = false;
                    }

                    CartaEmba = cartaEmbaucadora();

            
                    cout << endl <<" ************************************************ " << endl;
                    cout << "         Nueva carta embaucadora: " << CartaEmba  << "        "<< endl;
                    cout <<" ************************************************ " << endl;
                    cout << endl;
                    system("pause");

                }else{
                    cout << endl << jugador1 << ", ¨Deseas modificar la carta embaucadora actual (" << CartaEmba << ")? Se le descontara 20 puntos (S/N): ";

                    cin >> opcion;

                    if(opcion == 'S' || opcion == 's'){

                    jugador1Sacrifico = true;

                    if(jugador1Sacrifico){ // Sacrifica 20 puntos si acepto cambair la carta embaucadora
                        puntosJugador1 -= 20;
                        jugador1Sacrifico = false;
                    }

                    CartaEmba = cartaEmbaucadora();

                    cout << endl <<" ************************************************ " << endl;
                    cout << "         Nueva carta embaucadora: " << CartaEmba  << "        "<< endl;
                    cout <<" ************************************************ " << endl;
                    cout << endl;
                    system("pause");

                    }

                }

               
            }

            
        }else{ 
            system("pause"); // Una vez terminadas las tres rondas se llama a la funcion para Ver el menu y se retorna la funcion elegir opcion.
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


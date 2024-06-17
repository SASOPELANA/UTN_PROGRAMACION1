#include <iostream>
#include "funcion.h"
using namespace std;

void PedirNombre(string &pj1, string &pj2){

    int vec1[5];
    int vec2[5];
    int i = 0, x = 0, lol;

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
        system("cls");
        cout << "EMBAUCADO" << endl;
        cout << "------------------------------------------------------------------------" << endl;
        cout << "RONDA #1" << endl;
        // Jugador 1
        cout << pj1 << " Vs " << pj2 <<endl;
        cout << endl;
        for(i = 0; i < 5; i++){
         int nueva_carta;
         bool repetida;
         do{

            nueva_carta = Cartas();
            repetida = false;

            for(x = 0;x < i; x++){
                if(vec1[x] == nueva_carta){
                    repetida = true;
                    break;
                }
            }

        // Verificar repetición en vec2
            if (!repetida) {
                for(x = 0; x < 5; x++){
                    if(vec2[x] == nueva_carta){
                        repetida = true;
                        break;
                    }
                }
            }

         } while(repetida);

         vec1[i] = nueva_carta;
        }

        for(i = 0; i < 5; i++){
         int nueva_carta;
         bool repetida;
         do{

            nueva_carta = Cartas();
            repetida = false;

            for(x = 0;x < i; x++){
                if(vec2[x] == nueva_carta){
                    repetida = true;
                    break;
                }
            }

        // Verificar repetición en vec1
            if (!repetida) {
                for(x = 0; x < 5; x++){
                    if(vec1[x] == nueva_carta){
                        repetida = true;
                        break;
                    }
                }
            }

         } while(repetida);

         vec2[i] = nueva_carta;
        }

        cout << endl << "  "<< pj1 << endl;
        for(i = 0; i < 5; i++) {
            int puntos;
            string nombre, cart_1;
            ObtenerNaipe(vec1[i], puntos, nombre, cart_1);
            cout << "     " << cart_1 << " de " << nombre << endl;
        }

        cout << endl << "  "<< pj2 << endl;
        cout << endl;
         for(i = 0; i < 5; i++) {
            int puntos;
            string nombre, cart_1;
            ObtenerNaipe(vec2[i], puntos, nombre, cart_1);
            cout << "     " << cart_1 << " de " << nombre << endl;
        }



    }else if (J == 'N' || J == 'n'){
        return PedirNombre(pj1, pj2);
    }else{
        cout << "Opcíon no valida, ingrese los datos de nuevo." << endl;
        system("pause");
        return PedirNombre(pj1, pj2);
    }

    cout << endl << "------------------------------------------------------------------------" << endl;
}



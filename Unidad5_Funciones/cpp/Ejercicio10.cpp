/*
    10 Hacer una función que reciba un código de naipe (del 1 al 40) y determine el número y el palo de la baraja española de 40 cartas (sin los 8, 9 y comodines
    del mazo). 
    La función debe recibir por referencia el número de naipe y el nombre del palo (para ser completados por la función) y por valor el código de naipe.
    Tener en cuenta que: Los códigos de naipes de espada van del 1 al 10, basto del 11 al 20, copa del 21 al 30 y oro del 31 al 40. Por ejemplo, naipe con ID #10 es el 12 de espadas
*/
#include <iostream>
#include <string>
using namespace std;

void BarajaEspanola(int num_naipe, int &naipe, string &palo);

int main(){

    int codigoNaipe;
    int numero;
    string palo;

    cout << "Ingrese el código del naipe (1-40): ";
    cin >> codigoNaipe;

    BarajaEspanola(codigoNaipe, numero, palo);

    if (numero != -1) {
        cout << "El naipe con código " << codigoNaipe << " es el " << numero << " de " << palo << ".\n";
    } else {
        cout << "Código de naipe inválido.\n";
    }

    return 0;
}

void BarajaEspanola(int num_naipe, int &naipe, string &palo){

    if(num_naipe >= 1 && num_naipe <= 10) {
        palo = "Espadas";
    } else if(num_naipe >= 11 && num_naipe <= 20) {
        palo = "Bastos";
        num_naipe -= 10;
    } else if (num_naipe >= 21 && num_naipe <= 30) {
        palo = "Copas";
        num_naipe -= 20;
    } else if (num_naipe >= 31 && num_naipe <= 40) {
        palo = "Oro";
        num_naipe -= 30;
    } else {
        palo = "Desconocido";
        naipe = -1;
        return;
    }

    // Ajustar el número del naipe a los valores correspondientes
    if (num_naipe == 8) {
        naipe = 10;
    } else if (num_naipe == 9) {
        naipe = 11;
    } else if (num_naipe == 10) {
        naipe = 12;
    } else {
        naipe = num_naipe;
    }

}


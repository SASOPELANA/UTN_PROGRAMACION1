#include <iostream>
#include "funciones.h"
using namespace std;

string cartaEmbaucadora(){

    string figura[] = { "Corazones", "Diamantes", "Picas", "Tr‚bol" };

    int numeroAleatorio = rand() % 4;

    return figura[numeroAleatorio];

}
#include <iostream>
#include "funciones.h"
using namespace std;

string cartaEmbaucadora(){

    string figura[] = { "Coraz¢n", "Diamante", "Pica", "Tr‚bol" };

    int numeroAleatorio = rand() % 4;

    return figura[numeroAleatorio];

}
#include <iostream>
#include "funciones.h"
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{

  srand(time(0));

  int opcion = -1;

    do
    {
        // system("clear"); // Para linux.
        system("cls"); // Para Windows
        VerMenu();

        cout << endl;
        ElegirOpcion(opcion);

        cin >> opcion;

        system("pause"); // Para Windows
        // cout << "Presione una tecla para continuar..."; // Linux
        // cin.ignore(); // linux
        // cin.get(); // linux

    } while (opcion != 0);

    return 0;
}
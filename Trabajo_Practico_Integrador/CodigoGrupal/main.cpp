#include <iostream>
#include "funciones.h"
using namespace std;

int main()
{

  int opcion = -1;

    do
    {
        system("clear"); // Para linux.
       // Para Windows  system("cls")
        VerMenu();

        cout << endl;
        ElegirOpcion(opcion);

        cin >> opcion;

        //  system("pause"); // Para Windows
        cout << "Presione una tecla para continuar..."; // Linux
        cin.ignore(); // linux
        cin.get(); // linux

    } while (opcion != 0);

    return 0;
}
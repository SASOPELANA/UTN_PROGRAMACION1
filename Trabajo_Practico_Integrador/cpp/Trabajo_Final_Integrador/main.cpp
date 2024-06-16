#include <iostream>
#include <locale.h>
#include "funcion.h"
#include <ctime>
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "Spanish");

    int opcion = -1;

    do
    {
        system("cls");
        VerMenu();

        cout << endl;
        ElegirOpcion(opcion);

        cin >> opcion;

        system("pause");

    } while (opcion != 0);


    return 0;
}

#include <iostream>
using namespace std;

int opcion = -1;

int main(){

    
    while (opcion != 0)
    {
        

        cout << "EMBAUCADO" << endl;
        cout << "---------------------" << endl;
        cout << "1 _ JUGAR" << endl;
        cout << "2 _ ESTADÍSTICAS" << endl;
        cout << "3 _ CRÉDITOS" << endl;
        cout << "---------------------" << endl;
        cout << "0 _ SALIR" << endl;

        switch (opcion)
        {
        case 1:
            cout << "1 _ JUGAR" << endl;
            break;
        
        case 2:

            cout << "2 _ ESTADÍSTICAS" <<  endl;

            break;

        case 3:

            cout << "3 _ CRÉDITOS" << endl;
            break;

        default:

            cout << "Ópcion no valida." << endl;

            break;
        }


        cin >> opcion;

    }
    
    


    return 0;
}
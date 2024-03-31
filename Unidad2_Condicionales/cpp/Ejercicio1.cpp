#include <iostream>
using namespace std;

int main()
{
    /**
    1 Hacer un programa para ingresar por teclado un número y luego emitir por
      pantalla un cartel aclaratorio indicando si el mismo es positivo, negativo o cero.
      Importante: Verifique que el programa emita UN SOLO CARTEL.
    */

   int num;

    cout << "Diguite un numero: ";
    cin >> num;
    cout << endl;

    if (num > 0)
    {
        cout << "El numero " << num << " es positivo." << endl;  
    }else if (num == 0)
    {
        cout << "El numero es: " << num << endl;
    }else
    {
        cout << "El numero " << num << " es negativo." << endl;
    }
    
    cout << endl << "FIN DEL PROGRAMA" << endl;

    return 0;
}
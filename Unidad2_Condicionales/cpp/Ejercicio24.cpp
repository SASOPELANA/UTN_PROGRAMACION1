#include <iostream>
using namespace std;

int main(){

    /**
    24 Hacer un programa para ingresar un número de mes y listar por pantalla a qué trimestre corresponde ese mes. Tener en cuenta esta lista:
       Mes 1, 2 y 3. Trimestre 1. Mes 4, 5 y 6. Trimestre 2. 
       Mes 7, 8 y 9. Trimestre 3. Mes 10, 11 y 12. Trimestre 4.

       Resolver este ejercicio utilizando la menor cantidad de salidas de IF posibles, de forma tal que si en un hipotético caso, 
       hubiera años de 200 meses su diagrama no deba ser modificado en tal situación.

       Recordar también que la división directa con el operador / genera un resultado con fracción. 
       Por ejemplo si mes=7 y usted calcula trimestre=7/3 el resultado que obtendrá es trimestre= 2.33, lo cual es incorrecto.
    */

    int mes;

    cout << "Diguite el numero del mes (1-12): " << endl;
    cin >> mes;
    cout << endl;

    if (mes % 3 != 0){mes = mes + 3;}
    
    mes = mes / 3;

    switch (mes)
    {
    case 1:
        cout << "Trimestre 1." << endl;    
        break;
    case 2:
        cout << "Trimestre 2." << endl;    
        break;    
    case 3:
        cout << "Trimestre 3." << endl;    
        break; 
    case 4:
        cout << "Trimestre 4." << endl;    
        break; 
    default:
        cout << "El mes no existe." << endl;
        break;
    }

    return 0;
}
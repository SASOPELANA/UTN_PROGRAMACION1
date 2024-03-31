#include <iostream>
using namespace std;

int main()
{
    /**
    16 Hacer un programa para ingresar por teclado las cuatro notas de los exámenes obtenidas por un alumno y luego emitir uno solo de los cartel de acuerdo a las siguientes condiciones: 
       - “Promociona”, sí obtuvo en los cuatro exámenes nota 7 o más. 
       - “Rinde examen final”, si obtuvo nota 4 o más en por lo menos tres exámenes. 
       - “Recupera Parciales”, si obtuvo nota 4 o más en por lo menos uno de los exámenes. 
       - “Recursa la materia”, si no aprobó ningún examen parcial.
    */

    int nota1, nota2, nota3,nota4;

    cout << "Ingrese la nota del exámen 1: ";
    cin >> nota1;
    cout << "Ingrese la nota del exámen 2: ";
    cin >> nota2;
    cout << "Ingrese la nota del exámen 3: ";
    cin >> nota3;
    cout << "Ingrese la nota del exámen 4: ";
    cin >> nota4;
    cout << endl;

    if (nota1 >= 7 && nota2 >= 7 && nota3 >= 7 && nota4 >= 7)
    {
        cout << "Promociona." << endl;
    }else if ((nota1 >= 4 && nota2 >= 4 && nota3 >= 4) || (nota1 >= 4 && nota3 >= 4 && nota4 >= 4) || (nota1 >= 4 && nota2 >= 4 && nota4 >=4) || (nota2 >= 4 && nota3 >= 4 && nota4 >= 4))
    {
        cout << "Rinde exámen final." << endl;
    }else if (nota1 >= 4 || nota2 >= 4 || nota3 >= 4 || nota4 >= 4)
    {
        cout << "Recupera Parciales." << endl;
    }else
    {
        cout << "Recursa la materia." << endl;
    }

    return 0;
}
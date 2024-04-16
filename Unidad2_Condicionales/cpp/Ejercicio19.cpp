#include <iostream>
using namespace std;

int main(){
    /**
    19 Este ejercicio lo resolverán en la parte práctica de la materia.
       El costo de un desarrollo de un proyecto de software se calcula en base al lenguaje que se necesita:
       Nombre Tipo Valor hora
       C/C++ 'C' $ 7500
       C# '#' $ 6100
       Python 'P' $ 5400
       Go 'G' $ 5000
       Además, si el proyecto es marcado como Urgente, se le aumenta un 120 % más al costo del proyecto.
       Le solicitan un programa que permita calcular el costo total de un proyecto
       basado en la cantidad de horas (int), el tipo de lenguaje (char) y si es urgente o no (bool)
    */

    int horas, valor_lenaguaje = 0;
    char len;
    bool urgente;
    float precio_final;

    cout << "Seleccíone los lenguaje disponibles para desarrollar su proyecto de software: " << endl;
    cout << endl << "C++ (Opcion: C). --> Valor por hora $ 7500." << endl;
    cout << "C Sharp (Opcion: #). --> Valor por hora $ 6100." << endl;
    cout << "Python (Opcion: P). --> Valor por hora $ 5400." << endl;
    cout << "Go (Opcion: G). --> Valor por hora $ 5000." << endl;

    cin >> len;

    switch (len)
    {
    case 'C':
        valor_lenaguaje = 7500;
        break;
    case '#':
        valor_lenaguaje= 6100;
        break;
    case 'P':
        valor_lenaguaje = 5400;
        break;
    case 'G':
        valor_lenaguaje = 5000;
        break;    
    default:
        cout << "Lenguaje no disponible." << endl;
        break;
    }

    cout << "Proporcíone la cantidad de horas de trabajo: " << endl;
    cin >> horas;

    cout << "¿El proyecto es urgente? (SI = 1/NO = 0)" << endl;
    cin >> urgente;

    if (urgente){
        valor_lenaguaje = valor_lenaguaje * horas;
        precio_final = valor_lenaguaje * 2.2;
        cout << "Proyecto Urgente con un recargo del 120 %. El precio final del proyecto: $ " << precio_final << endl;
    }else{
        precio_final = valor_lenaguaje * horas;
        cout << "El precio del proyecto es: $ " << precio_final << endl;
    }


    return 0;
}
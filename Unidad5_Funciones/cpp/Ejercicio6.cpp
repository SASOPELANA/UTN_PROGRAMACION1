/*
    6 Hacer una función que reciba un número entero por valor llamado día y un string llamado nombre por referencia y le asigne el nombre correspondiente
    según el número de día. Siendo 0 → Domingo y 6 → Sábado.
*/
#include <iostream>
#include <string>
using namespace std;

void DiaSemana(int dia, string &nombre){
    switch (dia)
    {
    case  0:
        nombre = "Domingo";
        break;
    case 1:
        nombre = "Lunes";
        break;
    case 2:
        nombre = "Martes";
        break;
    case 3:
        nombre = "Miercoles";
        break;
    case 4:
        nombre = "Jueves";
        break;
    case 5:
        nombre = "Viernes";
        break;
    case 6:
        nombre = "Sabado";
        break;
    default:
        nombre = "Opcion no valida.";
        break;
    }
}

int main(){

    int num_dia = -1;
    string nombre;
    cout << "Ingrese un numero de la semana (0 - 6): " << endl;
    cin >> num_dia;
    
    DiaSemana(num_dia, nombre);

    cout << "Dia de la semana: " << num_dia << " --> " << nombre << endl;

    return 0;
}
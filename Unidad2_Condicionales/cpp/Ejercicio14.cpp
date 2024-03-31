#include <iostream>
using namespace std;

int main()
{
    /**
    14 Hacer un programa para ingresar por teclado la fecha de nacimiento de una persona, ingresando día, mes y año como 3 datos individuales. Luego ingresar la fecha actual ingresando día, mes y año como 3 datos individuales. Calcular luego la edad en años de esa persona y listar por pantalla. 
       Ejemplo 1. Si se ingresa como fecha de nacimiento: 3/12/2000 y la fecha actual es 26/2/2019 la edad de esa persona es 18 ya que los 19 recién los cumple en diciembre. 
       Ejemplo 2. Si se ingresa como fecha de nacimiento: 3/1/2000 y la fecha actual es 26/2/2019 la edad de esa persona es 19. 
       Ejemplo 3. Si se ingresa como fecha de nacimiento: 28/2/2000 y la fecha actual es 26/2/2019 la edad de esa persona es 18 ya que le faltan 2 días para cumplir los 19 años.
    */

    int dia_nac, mes_nac, annio_nac, dia_act, mes_act, annio_act, edad;

    cout << "Ingrese el dia de nacimiento: ";
    cin >> dia_nac;
    cout << "Ingrese el mes de nacimiento: ";
    cin >> mes_nac;
    cout << "Ingrese el año de nacimiento: ";
    cin >> annio_nac;
    cout << "Ingrese el dia actual: ";
    cin >> dia_act;
    cout << "Ingrese el mes actual: ";
    cin >> mes_act;
    cout << "Ingrese el año actual: ";
    cin >> annio_act;
    cout << endl;

    edad = annio_act - annio_nac;

    if (mes_nac > mes_act || (mes_nac == mes_act && dia_nac > dia_act))
    {
        edad = edad - 1;
    }

    cout << "La edad es: " << edad << " años."<< endl;
    cout << endl << "--FIN DEL PROGRAMA--" << endl;

    return 0;
}
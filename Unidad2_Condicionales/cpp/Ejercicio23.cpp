#include <iostream>
using namespace std;

int main(){

    /**
    23 Hacer un programa para ingresar un número de mes y listar por pantalla a qué bimestre corresponde ese mes. Tener en cuenta esta lista:
       Mes 1 y 2. Bimestre 1. Mes 3 y 4. Bimestre 2. Mes 5 y 6. Bimestre 3.
       Mes 7 y 8. Bimestre 4. Mes 9 y 10. Bimestre 5. Mes 11 y 12. Bimestre 6.

       Resolver este ejercicio utilizando la menor cantidad de salidas de IF posibles, de forma tal que si en un hipotético caso, 
       hubiera años de 200 meses su diagrama no deba ser modificado en tal situación.

       Recordar también que la división directa con el operador /  genera un resultado con fracción. 
       Por ejemplo si mes=7 y usted calcula bimestre=7/2 el resultado que obtendrá es bimestre= 3.5, lo cual es incorrecto.
    */

    int mes;

    cout << "Diguite el numero de mes: " << endl;
    cin >> mes;
    cout << endl;

    if (mes % 2 != 0){
        mes = mes + 1;
    }

    mes = mes / 2;

    switch (mes)
    {
    case 1:
        cout << "Bimestre 1." << endl;    
        break;
    case 2:
        cout << "Bimestre 2." << endl;    
        break;    
     case 3:
        cout << "Bimestre 3." << endl;    
        break; 
    case 4:
        cout << "Bimestre 4." << endl;    
        break; 
     case 5:
        cout << "Bimestre 5." << endl;    
        break;
    case 6:
        cout << "Bimestre 6." << endl;    
        break;     

    default:
        cout << "El mes no existe." << endl;
        break;
    }



    /**
    if (mes == 1 || mes == 2){
        cout << "Bimestre 1." << endl;
    }else if (mes == 3 || mes == 4){
        cout << "Bimestre 2." << endl;
    }else if (mes == 5 || mes == 6){
        cout << "Bimestres 3." << endl;
    }else if (mes == 7 || mes == 8){
        cout << "Bimestres 4." << endl;
    }else if (mes == 9 || mes == 10){
        cout << "Bimestres 5." << endl;
    }else if (mes == 11 || mes == 12){
        cout << "Bimestres 6." << endl;
    }
    */

    return 0;
}
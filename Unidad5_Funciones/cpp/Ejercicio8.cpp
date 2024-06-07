/*
    8 Escribir una función que reciba el valor de un año y retorne 1 si el mismo es bisiesto y 0 si es un año no bisiesto. Recordar que son años bisiestos los
    divisibles por 4, excepto los divisibles por 100, pero dentro de este grupo se incluyen los divisibles por 400. Por ejemplo 1992 fue bisiesto por ser divisible
    por 4. El año 1900 no fue bisiesto por ser divisible por 100, aun siendo divisible por 4. Y el año 2000 fue bisiesto por ser divisible por 400, aun siendo divisible por 100.
    Hacer un programa para ingresar una lista de 10 valores de años y contar cuantos son bisiestos. Utilizar la función solicitada.
*/
#include <iostream>
using namespace std;

bool AnnioBisiesto(int n1){
    bool bisiesto = false;
    if(n1 % 4 == 0 && (n1 % 100 != 0 || n1 % 400 == 0)){
        bisiesto = true;
    }
    return bisiesto;
}

int main(){

    int num, con_bisiesto = 0;
    int x = 0;

    for (x = 1; x <= 10; x++)
    {
        cout << "Ingrese un año: ";
        cin >> num;

        if (AnnioBisiesto(num))
        {
            con_bisiesto++;
        }
    }
    
    cout << endl;
    if (con_bisiesto > 0){
        cout << "Cantidad de años Bisiestos ingresados: " << con_bisiesto << endl;
    }else{
        cout << "No se ingresaron años Bisiestos. " << endl;
    }

    return 0;
}
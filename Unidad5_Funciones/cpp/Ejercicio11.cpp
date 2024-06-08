/*
    11 Hacer una función llamada contarDigitos que reciba por valor un número entero y determine y devuelva la cantidad de dígitos del número. 
    Por ejemplo, si se recibe el número 840 debe devolver 3.
    Hacer un programa que, a partir de un número que ingresa el usuario, informe por pantalla la cantidad de dígitos del número ingresado.
*/
#include <iostream>
using namespace std;

int ContarDigitos(int n1);

int main(){

    int num;

    cout << "Proporciones un número para contar sus Digitos: " << endl;
    cin >> num;

    num = ContarDigitos(num);

    if (num > 0){
        cout << "Cantidad de Digitos del Número ingresado: " << num << endl;
    }else{
        cout << "Usted ingreso el cero (0)." << endl;
    }
    
    return 0;
}

int ContarDigitos(int n1){
    int conNumeros = 0;

    while (n1 != 0)
    {
       n1 = n1 / 10;
       conNumeros++;
    }
    return conNumeros; 
}
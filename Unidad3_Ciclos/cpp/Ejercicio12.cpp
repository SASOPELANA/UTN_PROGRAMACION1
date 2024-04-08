#include <iostream>
using namespace std;

int main() {
    /*
    12 Hacer un programa para ingresar una lista de 10 números e informar el máximo de los negativos y el mínimo de los positivos.
       Ejemplo: 5, 8, 12, 2, -10, 15, -20, 8, -3, 24. Máximo Negativo -3. Mínimo Positivo 2.
    */

    int num, min_positivo, max_negativo;

    for (int x = 0; x < 10; x++) {
        cout << "Ingrese un número: ";
        cin >> num;

        if (num > 0 && min_positivo == 0){
            min_positivo = num;
        }else if (num < 0 && max_negativo == 0){
            max_negativo = num;
        }   

        if (num > 0 && num < min_positivo){
            min_positivo = num;
        }else if (num < 0 && num > max_negativo){
            max_negativo = num;
        }

    }

    cout << "El mínimo positivo es: " << min_positivo << endl;
    cout << "El máximo negativo es: " << max_negativo << endl;

    return 0;
}

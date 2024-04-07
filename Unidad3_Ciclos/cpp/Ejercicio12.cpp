#include <iostream>
using namespace std;

int main() {
    int num, min_positivo, max_negativo;
    bool bandera_positivo = false, bandera_negativo = false;

    for (int x = 0; x < 10; x++) {
        cout << "Ingrese un número: ";
        cin >> num;

        if (num > 0) { 
            if (!bandera_positivo || num < min_positivo) {
                min_positivo = num; 
                bandera_positivo = true; 
            }
        } else { 
            if (!bandera_negativo || num > max_negativo) { 
                max_negativo = num; 
                bandera_negativo = true; 
            }
        }
    }

    cout << "El mínimo positivo es: " << min_positivo << endl;
    cout << "El máximo negativo es: " << max_negativo << endl;

    return 0;
}

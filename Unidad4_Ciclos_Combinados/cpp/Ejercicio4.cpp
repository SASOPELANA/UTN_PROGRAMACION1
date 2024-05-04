/*
    4 Dada una lista de n£meros compuesta por 10 grupos y cada grupo separado del siguiente por un cero, se pide determinar e informar:
    a) Para cada uno de los grupos el m ximo de los n£meros pares y el m ximo de los n£meros impares. Se informan 2 resultados por cada grupo.
    b) Para cada uno de los grupos el porcentaje de n£meros negativos y n£meros positivos. Se informan 2 resultados por cada grupo.
    c) Cu ntos n£meros positivos hab¡a en total entre los 10 grupos. Se informa 1 resultado al final.
*/
#include <iostream>
using namespace std;

int main(){

    int num, x = 0;
    int par = 0, no_par = 0, maximo_par = 0, maximo_impar = 0; // A
    float positivos = 0, negativos = 0, con_punto_B = 0; // B
    int con_positivos = 0; // C

    for ( x = 1; x <= 10; x++)
    {
        // Punto A
        maximo_par = 0;
        maximo_impar = 0;
        // Punto B
        con_punto_B = 0;
        positivos = 0;
        negativos = 0;
        cout << "----------------------------------------------" << endl;
        cout << "Diguite n£meros en el grupo " << x << " o cero (0) para cambiar de grupo: "<< endl;
        cin >> num;
        while (num != 0)
        {
            // Punto A
            if (num % 2 == 0){
                par = num;
                if (num > maximo_par){
                    maximo_par = num;
                }
            }else{
                no_par = num;
                if (num > maximo_impar){
                    maximo_impar = num;
                }
            }
            // Punto B
            con_punto_B++;
            if (num > 0){
                positivos++;
                // Punto C
                con_positivos++;
            }else{
                negativos++;
            }

            cout << "----------------------------------------------" << endl;
            cout << "Diguite n£meros en el grupo " << x << " o cero (0) para cambiar de grupo: "<< endl;
            cin >> num;
        }

        // Punto A
        if (maximo_par > 0){
            cout << "M ximo Par: " << maximo_par << endl;
        }
        if (maximo_impar > 0){
            cout << "M ximo Impar: " << maximo_impar << endl;
        }

        // Punto B
        positivos = (positivos / con_punto_B) * 100;
        negativos = (negativos / con_punto_B) * 100;
        if (positivos > 0){
            cout << "Porcetaje de n£meros positivos: " << positivos << endl;
        }
        if (negativos > 0){
            cout << "Porcetaje de n£meros negativos: " << negativos << endl;
        }     
    }
    // Punto C

    cout << endl << "----------------------------------------------------" << endl;
    if (con_positivos > 0){
        cout << "En total de los 10 grupos, se ingesaron " << con_positivos << " n£meros potitivos." << endl;
    }else{
        cout << "No se ingresaron n£meros positivos. " << endl;
    }
   
    return 0;
}
/*
    9 Hacer un programa para ingresar los valores de los pesos de distintas encomiendas que 
    se deben enviar a distintos clientes y que finaliza cuando se ingresa un peso negativo. 
    Se deben agrupar las encomiendas en camiones que pueden transportar hasta 200 kilos en total.
    Ejemplo:  10, 20, 140,   70, 100,    40, 10, 50, 80,   90, 30, 40,     50, -10
    Camión:       1              2              3               4           5
    Se pide determinar e informar:
    a) El número de cada camión y peso total de encomiendas. Camión 1: 170 kg, Camión 2: 170 kg, etc.
    b) El número de camión que transporta mayor cantidad de encomiendas. 
    En el ejemplo anterior sería el Camión 3 con 4 encomiendas.
*/
#include <iostream>
using namespace std;

int main(){

    int peso, camion = 0, acu_peso = 0;

    cout << "Diguite el peso de la encomienda, o ingrese un peso negativo para finalizar: " << endl;
    cin >> peso;

    while (peso > 0) // Pseudo Corte de control
    {
        acu_peso = 0;
        camion++;  

        if (peso <= 200){

            while (peso + acu_peso <= 200 && peso > 0)
            {
                acu_peso += peso;




                cout << "Diguite el peso de la encomienda, o ingrese un peso negativo para finalizar: " << endl;
                cin >> peso;
            }
            cout << "Camion ---> " << camion << ". Peso ---> " << acu_peso << endl;

        }else{
            cout << endl << "-----------------------------" << endl;
            cout << "El peso supera la capidad máxima del camion. Solo hasta 200 Kilos Máximos." << endl;
            cout << "Diguite el peso de la encomienda, o ingrese un peso negativo para finalizar: " << endl;
            cin >> peso;
            if (camion >= 1){
                camion--;
            }
        }
        
    }
    

    return 0;
}
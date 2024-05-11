/*
    5 Se dispone de una lista de 10 grupos de n�meros enteros separados entre ellos por ceros. Se pide determinar e informar:
    a) El n�mero de grupo con mayor porcentaje de n�meros impares positivos respecto al total de n�meros que forman el grupo. Se informa 1 resultado al final.
    b) Para cada grupo el �ltimo n�mero primo y en qu� orden apareci� en ese grupo, si en un grupo no hubiera n�meros primos informar con un cartel
       aclaratorio. Se informan 2 resultados por cada grupo.
    c) Informar cuantos grupos est�n formados por todos n�meros ordenados de mayor a menor. Se informa 1 resultado al final.
*/
#include <iostream>
using namespace std;

int main(){

    int num, x = 0;
    int con_impar = 0, grupo_max = 0, con_numeros = 0; // A
    int porcentaje = 0, max_porcentaje = 0; // A
    int primos = 0, ultimo_primo = 0, posicion_primo = 0, i = 0; // B
    int mayor = 0, grupos_ordenados = 0; // C
    bool bandera_ordenada = true; // C
   
    for (x = 1; x <= 10; x++)
    {
        // Punto A
        con_numeros = 0;
        con_impar = 0;
        porcentaje = 0;
        // B
        ultimo_primo = 0;
        // Punto C
        bandera_ordenada = true;
        mayor = 0;
        cout << "----------------------------------------------------------------------" << endl;
        cout << "Lista " << x << ". Diguite números o cero (0) para cambiar de lista: " << endl;
        cin >> num;
        while (num != 0)
        {
            // Punto A
            con_numeros++;
            if (num % 2 != 0){
                if(num > 0){
                    con_impar++;
                }
            }

            // Punto B
            primos = 0;
            for (i = 1; i <= num; i++)
            {
                if (num % i == 0){
                    primos++;
                }
            }
            if (primos == 2)
            {
                ultimo_primo = num;
                posicion_primo = con_numeros;
            }
            
            // Punto C
            if (con_numeros == 1){
                mayor = num;
            }else if(mayor > num){
                mayor = num;
            }else{
                bandera_ordenada =  false;
            }
            
            cout << "----------------------------------------------------------------------" << endl;
            cout << "Lista " << x << ". Diguite números o cero (0) para cambiar de lista: " << endl;
            cin >> num;
        }
        // Punto A
        if (con_numeros != 0){
            porcentaje = (con_impar * 100) / con_numeros;
        if (porcentaje >= max_porcentaje){
                max_porcentaje = porcentaje;
                grupo_max = x;
            }
        }
        
        // Punto B
        if (ultimo_primo > 0){
            cout << "Grupo " << x << ". El ultimo número primo ingresado: " << ultimo_primo << endl;
            cout << "Grupo " << x << ". Posicion Ultimo Primo: " << posicion_primo << endl;
        }else{
            cout << "No se ingresaron números primos en el grupo " << x << endl;
        }

        // Punto C
        if (bandera_ordenada && mayor != 0 && con_numeros >= 2){
            grupos_ordenados++;
        }

    }
    // Punto A
    cout << "Grupo Máximo: " << grupo_max << endl;

    // Punto C
    cout << endl << "----------------------------------------------------" << endl;
    if (grupos_ordenados > 0){
        cout << "La cantidad de grupos ordenados de mayor a menor es: " << grupos_ordenados << endl;
    }else{
        cout << "No hay grupos ordenados." << endl;
    }
    

    return 0;
}

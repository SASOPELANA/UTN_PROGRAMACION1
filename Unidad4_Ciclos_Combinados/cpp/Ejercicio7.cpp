/*
    7 Se dispone de una lista de 10 grupos de números enteros separados entre ellospor ceros. 
    Se pide determinar e informar:
    a) Informar el promedio de cada grupo. Se informa 1 resultado por cada grupo.
    b) Determinar e informar el valor mínimo de todos los grupos, indicando en qué
    grupo se encontró y su posición relativa en el mismo. Se informan 3 resultados al final.
    c) El mayor de los promedios y a que grupo pertenecía. Se informan 2 resultados al final.
*/
#include <iostream>
using namespace std;

int main(){

    int num, x = 0;
    int con_grupo = 0, acu_grupo = 0; // A
    float promedio_grupo = 0; // A
    int minimo = 0, posicion_lista = 0, posicion_grupo = 0; // B
    bool bandera = true; // B
    int grupo_max = 0; // C
    float promedio_mayor = 0; // C

    for (x = 1; x <= 10; x++)
    {
        // Punto A
        con_grupo = 0;
        acu_grupo = 0;
        promedio_grupo = 0;
        // Punto B
        bandera = true;

        cout << "----------------------- Lista " << x << " --------------------------" << endl;
        cout << "Diguite números o cero (0) para cambiar de lista: " << endl;
        cin >> num;
        while (num != 0)
        {
            // Punto A
            con_grupo++;
            acu_grupo += num;

            // Punto B 
            if (bandera){
                minimo = num;
                posicion_grupo = x;
                posicion_lista = con_grupo;
                bandera = false;
            }else if(num < minimo){
                minimo = num;
                posicion_grupo = x;
                posicion_lista = con_grupo;
            }
    
            cout << "----------------------- Lista " << x << " --------------------------" << endl;
            cout << "Diguite números o cero (0) para cambiar de lista: " << endl;
            cin >> num;
        }
        // Punto A
        if (con_grupo > 0){
            promedio_grupo = (float)acu_grupo / con_grupo;
            cout << "*** Punto A ***" << endl;
            cout << "El promedio del grupo " << x << " : " << promedio_grupo << endl;
            // Punto C
            if (promedio_grupo > promedio_mayor){
                promedio_mayor = promedio_grupo;
                grupo_max = x;
            } // Termina Punto C
        }else{
            cout << "*** Punto A ***" << endl;
            cout << "No se ingresaron números en el grupo " << x << endl;
        }



    }
    // Punto B
    if(minimo != 0){
        cout << endl << "*** Punto B ***" << endl;
        cout << "El valor mínimo de todos los grupos es: " << minimo << endl;
        cout << "Grupo del mínimo: " << posicion_grupo << ". Su posicion en el grupo: " << posicion_lista << endl;
    }
    
    // Punto C
    if(promedio_mayor != 0){
        cout << endl << "*** Punto C ***" << endl;
        cout << "El mayor de los promedios: " << promedio_mayor << ". Grupo: " << grupo_max << endl;
    }
    return 0;
}
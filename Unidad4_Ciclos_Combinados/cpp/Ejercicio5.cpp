/*
    5 Se dispone de una lista de 10 grupos de n£meros enteros separados entre ellos por ceros. Se pide determinar e informar:
    a) El n£mero de grupo con mayor porcentaje de n£meros impares positivos respecto al total de n£meros que forman el grupo. Se informa 1 resultado al final.
    b) Para cada grupo el £ltimo n£mero primo y en qu‚ orden apareci¢ en ese grupo, si en un grupo no hubiera n£meros primos informar con un cartel
       aclaratorio. Se informan 2 resultados por cada grupo.
    c) Informar cuantos grupos est n formados por todos n£meros ordenados de mayor a menor. Se informa 1 resultado al final.
*/
#include <iostream>
using namespace std;

int main(){

    int num, x = 0;
    int con_impar = 0, grupo_max = 0, con_numeros = 0; // a
    float porcentaje = 0, max_porcentaje = 0; // a
   
    for (x = 1; x <= 10; x++)
    {
       
        // punto <
        con_numeros = 0;
        con_impar = 0;
        cout << "----------------------------------------------------------------------" << endl;
        cout << "Lista " << x << ". Diguite n£meros o cero (0) para cambiar de lista: " << endl;
        cin >> num;
        while (num != 0)
        {
            // A
            con_numeros++;
            if (num % 2 != 0){
                if(num > 0){
                    con_impar++;
                }
            }



            cout << "----------------------------------------------------------------------" << endl;
            cout << "Lista " << x << ". Diguite n£meros o cero (0) para cambiar de lista: " << endl;
            cin >> num;
        }
        // a
        if (con_numeros != 0){
            porcentaje = (con_impar * 100) / con_numeros;
        if (porcentaje > max_porcentaje){
                max_porcentaje = porcentaje;
                grupo_max = x;
            }
        }
        

    }
    
    cout << "Grupo maximo: " << grupo_max << endl;

    return 0;
}

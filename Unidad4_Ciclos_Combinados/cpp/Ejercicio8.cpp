/*
    8 Hacer un programa para ingresar por teclado 5 grupos compuestos por números ordenados de menor a mayor. 
    El final de cada grupo se detecta al ingresar un número menor a su anterior. Se debe obtener y emitir:
    a) Para cada uno de los grupos la cantidad de números primos que lo componen. Se informa 1 resultado por cada grupo.
    b) El menor número par de cada uno de los grupos. Se informa 1 resultado por cada grupo.
    c) El anteúltimo y último número positivo de cada uno de los grupos. Se informan 2 resultados por cada grupo.
    Ejemplo de cómo se conforman los grupos:    
    Grupo 1:  -20, -5, 8,
    Grupo 2:  2, 20, 35, 42,
    Grupo 3:  12, 22, 23,
    Grupo 4:  7, 12, 18, 23, 80,
    Grupo 5:  12, 24, 36, -5
*/
#include <iostream>
using namespace std;

int main(){

    int num, x = 0, anterior = 0, con = 0;
    bool banadera_mayor = true;
    int primos = 0, con_primos = 0, i = 0;

    for (x = 1; x <= 5; x++)
    {   
        // Punto A
        con_primos = 0;
        primos = 0;

        banadera_mayor = true;
        con = 0;
        cout << "-------------- Grupo " << x << "----------------" << endl;
        cout << "Diguite números, o un número menor al anterior para cambiar de grupo: " << endl;
        cin >> num;
        while (banadera_mayor)
        {
            con++;
            
            // Punto A
            if(num > 1){
                con_primos = 0;
                for (i = 1; i <= num; i++)
                {
                    if(num % i == 0){
                        con_primos++;
                    }
                }
                if(con_primos == 2){
                    primos++;
                }  
            }
            
            


           
            if (con == 1){
                anterior = num;
            }else if(num < anterior){
                banadera_mayor = false;
            }else{
                anterior = num;
            }
            if (banadera_mayor){
                cout << "-------------- Grupo " << x << "----------------" << endl;
                cout << "Diguite números, o un número menor al anterior para cambiar de grupo: " << endl;
                cin >> num;
            }
        }
        // Punto A
        if (primos > 0){
            cout << "Grupo " << x << ". Cantidad de primos: " << primos << endl;
        }else{
            cout << "No hay numeros primos en el grupo " << x << endl;
        }
            
            
        
    }
    


    return 0;
}

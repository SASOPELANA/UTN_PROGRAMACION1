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

    int num, x = 0, anterior = 0, con = 0; // Estructura
    bool banadera_mayor = true; // Estructura
    int primos = 0, con_primos = 0, i = 0; // A
    int par = 0, par_menor = 0; // B
    int posi = 0, ante_posi = 0, ultimo_posi = 0; // C

    for (x = 1; x <= 5; x++)
    {   
        // Punto A
        con_primos = 0;
        primos = 0;
        // Punto B
        par = 0;
        par_menor = 0;
        // Punto C
        posi = 0;

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

            // Punto B
            if(num % 2 == 0 && num != 0){
                par++;
                if(par == 1){
                    par_menor = num;
                }else if(num < par_menor){
                    par_menor = num;
                }  
            }

            // Punto C
            if (num > 0){
                posi++;
                if(posi == 1){
                    ultimo_posi = num;
                }else if(posi > 1){
                    ante_posi = ultimo_posi;
                    ultimo_posi = num;
                }
            }
            
            // Estructura
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
        // Punto B
        if(par > 0){
            cout << "Grupo: " << x << ". Número par menor: " << par_menor << endl;
        }else{
            cout << "No hay números pares en el grupo: " << x << endl;
        }
        // Punto C   
        if (posi == 1){
            cout << "Último número positivo en el grupo " << x << " ---> " << ultimo_posi << endl;
        }else if(posi > 1){
            cout << "Grupo: "<< x << ". Anteúltimo número positivo: " << ante_posi << endl;
            cout << "Grupo: "<< x << ". Último número positivo: " << ultimo_posi << endl;
        }else{
            cout << "Grupo " << x << ". No se ingresaron números positivos." << endl;
        }
       
    }
    
    cout << endl << "--- FIN DEL PROGRAMA ---" << endl;

    return 0;
}

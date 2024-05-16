/*
    10_ Dada una lista de números compuesta por grupos donde cada grupo está separado del siguiente por un cero, 
    y la lista de números finaliza cuando se ingresan dos ceros consecutivos, se pide determinar e informar:
    a) La cantidad de grupos en los que se detecten un total de 4 o más números primos consecutivos. 
    Se informa 1 resultado al final.
    b) Para cada uno de los grupos en los que se haya detectado números negativos, 
    el mayor y el segundo mayor de los mismos y en qué posiciónestaban dentro del subgrupo. 
    En los grupos sin negativos, informar “Grupo sin negativos”. Se informan 4 resultados por cada grupo.
    c) El mayor número primo de todos los grupos, informando además en cual grupo y en qué posición del mismo fue detectado. 
    Se informan 3 resultados al final.
    Ejemplo de una posible lista: 5, 4, 3, 0, 18, -5, 20, 0, 7, 11, 25, 4, 0, 0.
*/
#include <iostream>
using namespace std;

int main(){

    int num, con_cero = 0, grupo = 0; // Estructura
    int primos = 0, con_primos = 0, i = 0, grupos_primos = 0; // Punto A
    int negativos = 0, posicion_nega = 0, mayor_negativo = 0, segundo_nega_mayor = 0, con_numeros = 0; // B
    bool ban_nega = true; // B
    int primo_mayor = 0, grupo_primo_mayor = 0, posicion_primo_mayor = 0, conPrimo_c = 0, j = 0; // C

    
    while (con_cero != 2)
    {
        // Estructura
        grupo++;
        cout << "* Grupo --> " << grupo << endl;
        cout << "Diguite números o un solo cero (0) para cambiar de grupo, o diguite dos ceros (0) seguidos para finalizar: " << endl;
        cin >> num;
        if(num == 0){
            con_cero++;
        }else{
            con_cero = 0;
        }

        primos = 0; // A
        con_numeros = 0; // B
        ban_nega = true; // B
        mayor_negativo = 0; // B
        segundo_nega_mayor = 0; // B
        while (num != 0)
        {
            
            // Punto A
            if (num > 1){
                con_primos = 0;
                for (i = 1; i <= num; i++)
                {
                    if(num % i == 0){
                        con_primos++;
                    }
                }
                if(con_primos == 2){
                    primos++;
                    if (primos >= 4)
                    {
                        grupos_primos++;
                        primos = 0;
                    }      
                }else{
                    primos = 0;
                } 
            } // termina a

            // Punto B
            con_numeros++;
            if(num < 0){
                if(ban_nega){
                    mayor_negativo = num;
                    posicion_nega = con_numeros;
                    ban_nega =  false;
                }else if(num > mayor_negativo){
                    segundo_nega_mayor = mayor_negativo;
                    mayor_negativo = num;
                    posicion_nega = con_numeros;
                }
            }

            // Punto C
            if(num > 1){
                conPrimo_c = 0;
                for (j = 1; j <= num; j++)
                {
                    if(num % j == 0){
                        conPrimo_c++;
                    }
                }
                if(conPrimo_c == 2){
                    //primo_mayor = num;
                    //grupo_primo_mayor = grupo;
                    //posicion_primo_mayor = con_numeros;
                    if(num > primo_mayor){
                        primo_mayor = num;
                        grupo_primo_mayor = grupo;
                        posicion_primo_mayor = con_numeros;
                    }
                }
                
            }

            // Estructura
            cout << "* Grupo --> " << grupo << endl;  
            cout << "Diguite números o un solo cero (0) para cambiar de grupo, o diguite dos ceros (0) seguidos para finalizar: " << endl;
            cin >> num;
            if(num == 0){
                con_cero++;
            }else{
                con_cero = 0;
            }
        }
        // Punto B
        if(mayor_negativo != 0){
            cout << endl << "Grupo: " << grupo << endl;
            cout << "Mayor número negativo: " << mayor_negativo << ". Posicion en el Subgrupo : " << posicion_nega << endl;
            if(segundo_nega_mayor != 0){
                cout << endl << "Grupo: " << grupo << endl;
                cout << "Segundo número mayor negativo: " << segundo_nega_mayor << ". Posicion en el Subgrupo : " << posicion_nega - 1 << endl;
            }else{
                cout << endl << "Grupo: " << grupo << endl;
                cout << "No se ingreso un segundo número neagativo. " << endl;
            }
        }else{
            cout << endl << "Grupo: " << grupo << endl;
            cout << "No se ingresaron números negativos. " << endl;
        }

    }
    
    // Punto A
    if(grupos_primos > 0){
        cout << "Grupos con primos consecutivos: " << grupos_primos << endl;
    }else{
        cout << "No hay primos consecutivos en los grupos." << endl;
    }
    
    // Punto C
    if (primo_mayor > 0){
        cout << endl << "--------- Punto C ----------" << endl;
        cout << "Mayor número primos de todos los grupos: " << primo_mayor << endl;
        cout << "Grupo: " << grupo_primo_mayor << endl;
        cout << "Posicion Subgrupo: " << posicion_primo_mayor << endl;
    }

    return 0;
}
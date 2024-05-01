/* 25 El festival Larapalooza, el mejor festival musical del mundo, brindará una serie de conciertos distribuidos en tres jornadas distintas. 
Se desea un programa que registre los artistas que participarán. Por cada artista se registró:
- Número de artista (entero)
- Integrantes (entero)
- Jornada (1, 2 o 3)
- Duración del show en minutos (entero)
La información no se encuentra ordenada bajo ningún criterio. La carga de datos se finaliza con un número de artista igual a cero. Calcular e informar:
- El número de artista que realice el show más largo de la jornada 1.
- La cantidad de solistas (artistas de 1 integrante) que participaron en cada una de las jornadas. (se muestran tres resultados).
- La jornada más extensa (en minutos totales).
- Duración promedio de show por artista (se muestra un resultado).*/

#include <iostream>
using namespace std;

int main(){

    int num_artista, integrantes, jornada, duracion_show, show_mas_largo1 = 0, acu_jor_uno = 0, acu_jor_dos = 0, acu_jor_tres = 0;
    int numero_max_j1 = 0, jornada_uno = 0, jornada_dos = 0, jornada_tres = 0, acu_artista = 0, acu_show = 0;
    bool bandera = true;

    cout << "Diguite el número del artista o cero (0) para finalizar: " << endl;
    cin >> num_artista;
    if (num_artista != 0){
        cout << "Diguite la cantidad de integrantes: " << endl;
        cin >> integrantes;
        cout << "Diguite la jornada (1, 2 o 3): " << endl;
        cin >> jornada;
        cout << "Diguite la duracion del show en minutos: " << endl;
        cin >> duracion_show;
    }

    while (num_artista != 0)
    {   // Punto 1
        if (jornada == 1){
            if(bandera){
                show_mas_largo1 = duracion_show;
                numero_max_j1 = num_artista;
                bandera =  false;
            }else if(duracion_show > show_mas_largo1){
                show_mas_largo1 = duracion_show;
                numero_max_j1 = num_artista;
            }
        }
        // Punto 2
        if (integrantes == 1){
            if(jornada == 1){
                jornada_uno++;
            }else if(jornada == 2){
                jornada_dos++;
            }else{
                jornada_tres++;
            }
        }
        // Punto 3
        if (jornada == 1){
            acu_jor_uno += duracion_show;
        }else if(jornada == 2){
            acu_jor_dos += duracion_show;
        }else{
            if (jornada == 3){
                acu_jor_tres += duracion_show;
            }
        }
        // Punto 4
        acu_artista ++;
        acu_show += duracion_show;

        cout << "--------------------------------------" << endl;
        cout << "Diguite el número del artista o cero (0) para finalizar: " << endl;
        cin >> num_artista;
        if (num_artista != 0){
        cout << "Diguite la cantidad de integrantes: " << endl;
        cin >> integrantes;
        cout << "Diguite la jornada (1, 2 o 3): " << endl;
        cin >> jornada;
        cout << "Diguite la duracion del show en minutos: " << endl;
        cin >> duracion_show;
        }
    }

    // Punto 1
    cout << endl << "Punto 1" << endl;
    cout << "-------------------------------------------" << endl;
    if (!bandera){
        cout << "El número de artista que realice el show más largo de la jornada 1 es: " << numero_max_j1 << endl;
    }else{
        cout << "No hay artistas en la jornada 1." << endl;
    }

    // Punto 2
    cout << endl << "Punto 2" << endl;
    cout << "--------------------------------------------" << endl;
    if (jornada_uno > 0){
        cout << "La cantidad de solistas en la Jornada 1: " << jornada_uno << endl;
    }else{
        cout << "No hay solistas en jornada 1." << endl;
    }
    if (jornada_dos > 0){
        cout << "La cantidad de solistas en la Jornada 2: " << jornada_dos << endl;
    }else{
        cout << "No hay solistas en jornada 2." << endl;
    }
    if (jornada_tres > 0){
        cout << "La cantidad de solistas en la Jornada 3: " << jornada_tres << endl;
    }else{
        cout << "No hay solistas en jornada 3." << endl;
    }

    // Punto 3
    cout << endl << "Punto 3" << endl;
    cout << "--------------------------------------------" << endl;
    if (acu_jor_uno > acu_jor_dos && acu_jor_uno > acu_jor_tres){
        cout << "La jornada 1 es la más extensa. " << endl;
    }else if(acu_jor_dos > acu_jor_tres){
        cout << "La jornada 2 es la más extensa. " << endl;
    }else{
        if (acu_jor_tres > 0){
             cout << "La jornada 3 es la más extensa. " << endl;
        }      
    }
    
    // Punto 4
    cout << endl << "Punto 4" << endl;
    cout << "---------------------------------------------" << endl;
    acu_show = acu_show / acu_artista;
    if (acu_show > 0){
        cout << "Duración promedio de show por artista: " << acu_show << " minutos." << endl;
    }
    

    return 0;
}
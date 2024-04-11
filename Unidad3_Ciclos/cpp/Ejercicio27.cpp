#include <iostream>
using namespace std;

int main(){
    /*
    27 Una estación meteorológica registró una muestra climática de los últimos 15
       días. Por cada día registró:
       - Número de día (entero)
       - Temperatura (float)
       - Milímetros de lluvia (float)
       - Visibilidad en km (float)
       Hay un registro por cada día. La información se encuentra ordenada por día. Se
       pide calcular e informar:
       - El número del día que se haya registrado la temperatura máxima.
       - La amplitud térmica de todo el período.
       - La cantidad de días con neblina.
       - Mostrar "Quincena lluviosa" si hubo más días de lluvia que días sin lluvia.
       Mostrar "Quincena húmeda" si llovió en al menos un tercio de los días.
       De lo contrario mostrar "Quincena seca".
       NOTA: La amplitud térmica es la diferencia entre la temperatura máxima y la
       temperatura mínima.
       NOTA: Se considera neblina a una visibilidad menor a 2 km.
    */

    int dia_tem_max, dia_tem_minima, can_visi = 0, con_lluvia = 0;
    float temperatura_maxima, temperatura_minima, dia_maximo, dia_minimo, visibilidad;
    float amplitud_termica;
    bool lluvia;

    for (int x = 1; x <= 15; x++){
        cout << "Ingrese la temperatura maxima del dia " << x << endl;
        cin >> temperatura_maxima;
        cout << "Ingrese la temperatura minima del dia " << x << endl;
        cin >> temperatura_minima;

        cout << "Diguite la visibilidad del dia " << x << endl;
        cin >> visibilidad;

        cout << "LLovio el dia " << x << "? (1 para confirmar, 0 para indicar que no llovio.)" << endl;
        cin >> lluvia;


       if (x == 1){
        dia_maximo = temperatura_maxima;
        dia_minimo = temperatura_minima;
        dia_tem_max = x;
        dia_tem_minima = x;
       }else if(temperatura_maxima > dia_maximo){
                dia_maximo = temperatura_maxima;
                dia_tem_max = x;     
       }
       if (x >= 2){
          if (temperatura_minima < dia_minimo){
           dia_minimo = temperatura_minima;
           dia_tem_minima = x;
           }
       }  

       // punto 3  
        if (visibilidad < 2){
            can_visi++;
        }

        // punto 4
        if (lluvia){
            con_lluvia++;
        }
       
    }
    
    // punto 2
    amplitud_termica = dia_maximo - dia_minimo;

    cout << "El dia con mayor temperatura es: " << dia_tem_max << endl;
    cout << "El dia con menor temperatura es: " << dia_tem_minima << endl;
    cout << "La amplitud termica de todo el periodo es: " << amplitud_termica << endl;
    cout << "La cantidad de dias con neblina son: " << can_visi << endl;


    // punto 4

    if (con_lluvia >= 8){
        cout << "Quincena lluviosa." << endl;
    }else if (con_lluvia == 5){
        cout << "Quincena Húmeda." << endl;
    }else{
        cout << "Quincena seca" << endl;
    }


    return 0;
}
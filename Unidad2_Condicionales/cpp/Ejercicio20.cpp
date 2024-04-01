#include <iostream>
using namespace std;

int main()
{
    /**
    20 Hacer un programa en el que se ingrese la edad y altura de 5 personas. Luego, calcular e informar:
       La cantidad de personas mayores a 30 años que midan más de 1.8 metros.
       El promedio de altura de las personas mayores a 30 años.
       La cantidad de personas con altura entre 1.7 y 1.8 (ambos inclusive)
       La cantidad de personas cuya edad sea de 20, 30 o 40 años.
    */

    int edad1, edad2, edad3, edad4, edad5;
    float altura1, altura2, altura3, altura4, altura5;
    int personas_30_altura_180 = 0, cantidad_personas_altura_17_18 = 0, cantidad_personas_20_30_40 = 0;
    float altura_mayor_30 = 0, mayor_30 = 0, promedio_altura_mayor_30;


    cout << "Ingrese la edad y la altura de la primera persona: " << endl; 
    cin >> edad1 >> altura1;
    cout << "Ingrese la edad y la altura de la segunda persona: " << endl; 
    cin >> edad2 >> altura2;
    cout << "Ingrese la edad y la altura de la tercera persona: " << endl; 
    cin >> edad3 >> altura3;
    cout << "Ingrese la edad y la altura de la cuarta persona: " << endl; 
    cin >> edad4 >> altura4;
    cout << "Ingrese la edad y la altura de la quinta persona: " << endl; 
    cin >> edad5 >> altura5;
    cout << endl;

    // P 1
    if (edad1 >= 30 && altura1 >= 1.80){
        personas_30_altura_180++;
    }
    if (edad1 >= 30){
        altura_mayor_30 += altura1;
        mayor_30++;
    }
    if (altura1 >= 1.7 && altura1 <= 1.8){
        cantidad_personas_altura_17_18++;
    }
    if (edad1 == 20 || edad1 == 30 || edad1 == 40){
        cantidad_personas_20_30_40++;
    }
        
    // P 2
    if (edad2 >= 30 && altura2 >= 1.80){
        personas_30_altura_180++;
    }
    if (edad2 >= 30){
        altura_mayor_30 += altura2;
        mayor_30++;
    }
    if (altura2 >= 1.7 && altura2 <= 1.8){
        cantidad_personas_altura_17_18++;
    }
    if (edad2 == 20 || edad2 == 30 || edad2 == 40){
        cantidad_personas_20_30_40++;
    }

    // P 3
    if (edad3 >= 30 && altura3 >= 1.80){
        personas_30_altura_180++;
    }
    if (edad3 >= 30){
        altura_mayor_30 += altura3;
        mayor_30++;
    }
    if (altura3 >= 1.7 && altura3 <= 1.8){
        cantidad_personas_altura_17_18++;
    }
    if (edad3 == 20 || edad3 == 30 || edad3 == 40){
        cantidad_personas_20_30_40++;
    }

    // P 4
    if (edad4 >= 30 && altura4 >= 1.80){
        personas_30_altura_180++;
    }
    if (edad4 >= 30){
        altura_mayor_30 += altura4;
        mayor_30++;
    }
    if (altura4 >= 1.7 && altura4 <= 1.8){
        cantidad_personas_altura_17_18++;
    }
    if (edad4 == 20 || edad4 == 30 || edad4 == 40){
        cantidad_personas_20_30_40++;
    }

    // P 5
    if (edad5 >= 30 && altura5 >= 1.80){
        personas_30_altura_180++;
    }
    if (edad5 >= 30){
        altura_mayor_30 += altura5;
        mayor_30++;
    }
    if (altura5 >= 1.7 && altura5 <= 1.8){
        cantidad_personas_altura_17_18++;
    }
    if (edad5 == 20 || edad5 == 30 || edad5 == 40){
        cantidad_personas_20_30_40++;
    }

    promedio_altura_mayor_30 = altura_mayor_30 / mayor_30;

    cout << "Personas mayores a 30 años y que miden mas de 1.8 es: " << personas_30_altura_180 << endl;
    cout << "El promedio de altura de las personas mayores a 30 años es: " << promedio_altura_mayor_30 << endl;
    cout << "La cantidad de personas con altura entre 1.7 y 1.8 son: " << cantidad_personas_altura_17_18 << endl;
    cout << "La cantidad de personas cuya edad sea de 20, 30 o 40 años es: " << cantidad_personas_20_30_40 << endl;

    return 0;
}
#include <iostream>
using namespace std;

int main(){
    /*
    24 Se dispone de la información de los exámenes rendidos por algunos estudiantes de la UTN FRGP. Por cada registro de examen se conoce:
       - Legajo del estudiante (entero)
       - Código de materia (entero)
       - Nota (float)
       La finalización de la carga de datos se indica con un legajo de estudiante mayor a 30000. Calcular e informar:
       - La nota promedio entre todos los estudiantes.
       - El legajo del estudiante con menor nota.
       - La cantidad de exámenes rendidos para la materia 10.
       - El porcentaje de aprobados y no aprobados.
       NOTA: Un examen se considera aprobado con nota >= 6
       NOTA: Si hay varios estudiantes con la menor nota. Informar el primero de ellos.
    */

    int legajo = 0, codigo = 0, con = 0, legajo_menor, con_mate10 = 0, con_apro = 0, con_no_apro = 0, pri_desa = 0;
    float nota = 0, promedio = 0, acu_estu = 0, nota_menor = 0, acu_apro = 0, acu_no_apro = 0;
    bool bandera = true;

    cout << "Ingrese el número de legajo del estudiante: " << endl;
    cin >> legajo;
    cout << "Ingrese el código de la materia: " << endl;
    cin >> codigo;
    cout << "Ingrese la nota del exámen del estudiante: " << endl;
    cin >> nota;

    while (bandera)
    {
        con++;
        acu_estu += nota;

        if(con == 1){
            nota_menor = nota;
            legajo_menor = legajo;
        }else if(nota < nota_menor){
             nota_menor = nota;
             legajo_menor = legajo;   
        }

        if (codigo == 10){
            con_mate10++;
        }

        if (nota >= 6){
            con_apro++;
            acu_apro += nota;
        }else{
            con_no_apro++;
            acu_no_apro += nota;
            if (con_no_apro == 1){
                pri_desa = legajo;
            }
        }

        if (legajo > 30000){
            bandera = false;
        }else{
            cout << "Ingrese el número de legajo del estudiante: " << endl;
            cin >> legajo;
            cout << "Ingrese el código de la materia: " << endl;
            cin >> codigo;
            cout << "Ingrese la nota del exámen del estudiante: " << endl;
            cin >> nota;
        }
    }
    
    promedio = acu_estu / con;

    acu_apro = acu_apro / con_apro;
    acu_no_apro = acu_no_apro / con_no_apro;

    cout << "El promedio de todos los estudiantes es: " << promedio << endl;
    cout << "El legajo del estudiante con menor nota: " << legajo_menor << endl;
    if (con_mate10 > 0){
        cout << " La cantidad de exámenes rendidos para la materia 10 es: " << con_mate10 << endl;
    }else{
        cout << "No se registraron exámenes rendidos para la materia 10." << endl;
    }
    if (con_apro > 0){
        cout << "El porcentaje de aprobados: " << acu_apro << endl;
    }else{
        cout << "No hay estudiantes aprobados." << endl;
    }
    if (con_no_apro > 0){
        cout << "El porcentaje de no aprobados: " << acu_no_apro << endl;
    }else{
        cout << "Todos aprobaron." << endl;
    }
    if (con_no_apro >= 3){
        cout << "El legajo del primer alunmo desaprobado: " << pri_desa << endl;
    }
    
    return 0;
}
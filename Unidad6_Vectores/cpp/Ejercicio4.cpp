/*
    4 Leer 10 números y guardarlos en un vector. Determinar e informar cuál es el valor máximo absoluto del vector. 
    Por ejemplo 20, -43 y 5, el máximo absoluto es -43.
*/
#include <iostream>
using namespace std;

int main(){

    int vector[10], vec2[10] ;
    int num, x = 0, max_abs = 0;
    int maximo_absoluto = 0;

    for (x = 0; x < 10; x++)
    {
        cout << "Ingrese números: ";
        cin >> num;
        vector[x] = num;
    }

    for ( x = 0; x < 10; x++)
    {
        vec2[x] = vector[x];  
    }

    for (x = 0; x < 10; x++)
    {
        if (vector[x] < 0){
            vector[x] = vector[x] * -1;
        }
    }

    for (x = 0; x < 10; x++)
    {
      if (vector[x] > max_abs)
      {
        max_abs = vector[x];
        maximo_absoluto = vec2[x];
      }
    }

    cout << endl;
    cout << "El Máximo Absoluto:  " << maximo_absoluto << endl ;

    return 0;
}

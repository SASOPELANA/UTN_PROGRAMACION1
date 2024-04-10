#include <iostream>
using namespace std;

int main(){
    /**
    26 Hacer un programa que muestre los números primos entre el 1 y el 10000. El
       usuario no debe ingresar nada en este programa.
    */

    int con_primos = 0;;

    for (int x = 1; x <= 1000; x++)
    {   
        con_primos = 0;
        for (int i = 1; i <= x; i++)
        {
            if (x % i == 0){
                con_primos++;
            }
        }
        if (con_primos == 2)
        {
            cout << x << endl;
        }
    }
    

    return 0;
}
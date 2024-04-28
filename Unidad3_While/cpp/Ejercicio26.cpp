#include <iostream>
using namespace std;

int main(){
    /**
    26 Un número Simonírico es un número positivo divisible por 15 y a la vez divisible por 3 pero no divisible por 6. 
       Hacer un programa que muestre los primeros 1000 números Simoníricos. El usuario no debe ingresar nada.
    */

    int num = 1, simo = 0;  

    while (num <= 1000)
    {
        simo = 0;
        if(num % 15 == 0 && num % 3 == 0 && num % 6 != 0){
            simo = num;
            cout << simo << endl;
        }
        num++;
    }
    
    return 0;
}
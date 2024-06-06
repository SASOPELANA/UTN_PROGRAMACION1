/*
    4 Hacer una funci¢n llamada EsPrimoSophieGermain que reciba un n£mero entero y determine si el mismo es un n£mero primo de Sophie Germain. Debe
    devolver verdadero si lo es y falso si no lo es.
    NOTA: En teor¡a de n£meros, se dice que un n£mero natural es un n£mero primo de Sophie Germain, si el n£mero n es primo y 2*n+1 tambi‚n lo es.
    Ejemplo: El n£mero 2 es n£mero primo de Sophie Germain porque: 
    2 es primo
    2*2+1 ? 5 es primo.
    Hacer un programa para ingresar un n£mero y, utilizando EsPrimoSophieGermain, emita luego un cartel indicando si el n£mero ingresado es primo Sophie Germain o no lo es.
*/
#include <iostream>
using namespace std;

bool EsPrimoSophieGermain(int n1){
    bool primo = false;
    int x = 0, con = 0;
    if (n1 > 1){
        for (x = 1; x <= n1; x++)
        {
            if(n1 % x == 0){
                con++;
            }
        }
        if (con == 2)
        {
            primo = true;
        }
        if(primo){
            con = 0;
            int r = (n1 * 2) + 1;
            int i = 0;
            for (i = 1; i <= r; i++)
            {
                if(r % i == 0){
                    con++;
                }
            }
            if(con == 2){
                primo = true;
            }else{
                primo =  false;
            }
            
        }       
    }else{
        primo = false;
    } 
    return primo;
}

int main(){

    int num;

    cout << "Ingrese un numero: ";
    cin >> num;

   if(EsPrimoSophieGermain(num)){
        cout << "El numero ingresado es primo Sophie Germain. " << endl;
   }else{
        cout << "El numero ingresado No es primo Sophie Germain. " << endl;
   }

    return 0;
}
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
    int r = (n1 * 2) + 1;
    int x = 0, con = 0;
    bool primo = false;

    for (x = 1; x <= r; x++)
    {
        if(r % x == 0){
            con++;
        }
    }
    if (con == 2)
    {
        primo = true;
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
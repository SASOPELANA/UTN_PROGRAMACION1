/*
    16 Dada una lista de 10 n£meros, cargarlos en un vector. Luego detectar si en el vector hay alg£n elemento repetido y, 
    en caso de haberlo, indicarlo con un cartel ?Hay Repetidos?.
*/
#include <iostream>
using namespace std;

int Repetidos(int vector[]);

int main(){

    int vector[10];
    int num, x = 0, con = 0;

    for (x = 0; x < 10; x++)
    {
        cout << "Ingrese n£meros: " ;
        cin >> num;
        vector[x] = num;
    }

    con = Repetidos(vector);
    
    cout << endl;
    if (con > 0){
        cout << "Hay Repetidos." << endl;
    }else{
       cout << "No hay Repetidos." << endl; 
    }

    return 0;
}

int Repetidos(int vector[]){
    int x = 0, i = 0, con_repetidos = 0;
    
    for (x = 0; x < 10; x++)
    {   
        for (i = 0; i < 10; i++)
        {
            if (x != i && vector[x] == vector[i]){
                con_repetidos++;
            }
        } 
    }
    
    return con_repetidos;
    
}
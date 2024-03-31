#include <iostream>
using namespace std;

int main()
{
    /*
    5 Un comercio vende tres marcas de alfajores distintas A, B y C. Hacer un
      programa para ingresar por teclado la cantidad de alfajores vendidos de cada
      una de las tres marcas y luego se informe el porcentaje de ventas para cada
      una de ellas.
      Ejemplo. Si se ingresa 100, 25 y 75 como cantidades vendidas entonces el
      programa calculará e informará A: 50%, B: 12,50% y C: 37,50%.
    */

    float a, b, c, total_alfajores, porcentaje_a, porcentaje_b, porcentaje_c;

    cout << "Ingrese la cantidad de alfajor  A: ";
    cin >>  a;
    cout << "Ingrese la cantidad de alfajor B: ";
    cin >> b;
    cout << "Ingrese la cantidad de alfajor C: ";
    cin >> c;
    total_alfajores = a + b + c;
    porcentaje_a = a * 100 / total_alfajores;
    porcentaje_b = b * 100 / total_alfajores;
    porcentaje_c = c * 100 / total_alfajores;
    cout << endl;
    cout << "El porcentaje de los alfajores es A: " <<porcentaje_a << "%, B: " << porcentaje_b <<"%, C: " << porcentaje_c << "%" << endl;


    return 0;
}

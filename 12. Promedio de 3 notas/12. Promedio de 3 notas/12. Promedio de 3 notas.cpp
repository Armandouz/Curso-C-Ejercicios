// 12. Promedio de 3 notas.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int main()
{
    float n1, n2, n3, promedio = 0;

    cout << "Ingrese la nota 1: ";
    cin >> n1;

    cout << "Ingrese la nota 2: ";
    cin >> n2;

    cout << "Ingrese la nota 3: ";
    cin >> n3;

 

    promedio = (n1 + n2 + n3) / 3;

    cout.precision(2);

    cout << "\nEl promedio de las 3 notas es: " << promedio;


    
    return 0;
}



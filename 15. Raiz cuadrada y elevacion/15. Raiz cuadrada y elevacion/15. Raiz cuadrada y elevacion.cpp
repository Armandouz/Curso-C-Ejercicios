// 15. Raiz cuadrada y elevacion.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float x, y, resultado = 0;

    cout << "Ingrese el valor de X: ";
    cin >> x;

    cout << "Ingrese el valor de Y: ";
    cin >> y;

    resultado = (sqrt(x)) / (pow(y, 2) - 1);


    
    cout << "\n El resultado de la operacion es: 0" << resultado;

    

    return 0;
}


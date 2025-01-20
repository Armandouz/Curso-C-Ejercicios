// 7. Expresiones.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//escribe la siguiente extension matematica en c++

#include <iostream>
using namespace std;

int main()
{
    float a, b, resultado = 0;

    cout << "Ingrese el valor de A: ";
    cin >> a;

    cout << "Ingrese el valor de B: ";
    cin >> b;

    resultado = (a / b) + 1;

    cout.precision(2); // sirve para poner el numero de decimales
    cout << "\n el resultado de la expresion es: " << resultado;
    


    return 0;
}


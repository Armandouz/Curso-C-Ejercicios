// 4. Operacione aritmeticas.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// escribe un program que lea la entrda estandas dos numeros y muestre en la salida estandas su suma, resta, multiplicacion y division

#include <iostream>
using namespace std;

int main()
{
    int n1, n2, suma = 0, resta = 0, multiplicacion = 0, division = 0;

    cout << "Digite un numero: ";
    cin >> n1;

    cout << "Digite un numero: ";
    cin >> n2;

    suma = n1 + n2;
    resta = n1 - n2;
    multiplicacion = n1 * n2;
    division = n1 / n2;

    cout << "\N La suma es: " << suma << endl;
    cout << "La resta es: " << resta << endl;
    cout << "La multiplicacion es: " << multiplicacion << endl;
    cout << "la division es: " << division << endl;



    return 0;
}


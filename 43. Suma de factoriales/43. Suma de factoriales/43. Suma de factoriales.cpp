// 43. Suma de factoriales.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int nElementos, factorial = 1, suma = 0;

    cout << "Digite el numero de elementos a sumar: ";
    cin >> nElementos;

    for (int i = 1; i <=nElementos; i++)
    {
        factorial *= i;
        suma += factorial;
    }

    cout << "\n La suma del factorial es: " << suma << endl;

    system("pause");
    return 0;
}


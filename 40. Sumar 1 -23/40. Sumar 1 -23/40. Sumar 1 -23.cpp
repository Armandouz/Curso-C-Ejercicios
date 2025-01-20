// 40. Sumar 1 -23.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int n, suma = 0;

    cout << "Digite el numero de elementos: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        suma += i;
    }
    
    cout << "\n La suma es: " << suma << endl;

    




    system("pause");
    return 0;
}


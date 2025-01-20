// 41. Suma de los N numeros impares.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int nElementos, sumaTotal=0;
    

    cout << "Digite el numero de elementos a sumar: ";
    cin >> nElementos;

    for (int i = 1; i <=2*nElementos-1; i+=2)
    {
        sumaTotal += i;
    }

    cout << "\n La suma es: " << sumaTotal << endl;


    system("pause");
    return 0;
}


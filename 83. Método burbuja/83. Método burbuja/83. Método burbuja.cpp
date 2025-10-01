// 83. Método burbuja.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int numeros[] = { 4,1,3,2,5 };
    int i, j, aux;

    //algoritmo metodo burbuja
    for ( i = 0; i < 5; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            if (numeros[j] > numeros[j + 1]) {
                aux = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = aux;
            }
        }

    }

    cout << "Orden ascendente: ";
    for ( i = 0; i < 5; i++)
    {
        cout << numeros[i]<<" ";
    }

    cout << "\n Orden descendente: ";
    for (i = 4;i >=0  ; i--)
    {
        cout << numeros[i]<<" ";
    }
   

    return 0;
}


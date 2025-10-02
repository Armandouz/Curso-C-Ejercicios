// 88. Busqueda Secuencial en un arreglo.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int a[] = { 3,4,2,1,5 };
    int i, dato;
    char band = 'f';



    dato = 4;

    //Busqueda secuencial
    i = 0;
    while ((band == 'f') && (i < 5)) {
        if (a[i]==dato)
        {
            band = 'v';
        }
        i++;
    }

    if (band =='f')
    {
        cout << "El numero a buscar no existe en ele arreglo";
    }
    else
    {
        cout << "El numero a sido encontrado en la pos: " << i - 1<<endl;
    }

    return 0;
}


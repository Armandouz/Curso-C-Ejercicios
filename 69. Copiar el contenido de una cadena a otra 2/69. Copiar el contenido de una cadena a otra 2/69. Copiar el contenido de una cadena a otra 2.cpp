// 69. Copiar el contenido de una cadena a otra 2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string.h>
using namespace std;


int main()
{
    char frase[20], frase2[20];

    cout << "Digite una frase: ";
    cin.getline(frase, 20, '\n');

    strcpy_s(frase2, frase);//guardando dentro de frase 2

    cout << frase2 << endl;

    return 0;

}

// 72. Andiar o concatenar una cadena con otra.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main()
{
    char cad1[] = "Esto es una cadena";
    char cad2[] = " de ejemplo";
    char cad3[30];

    strcpy_s(cad3, cad1);// cad3 = "esto es una cadena"

    strcat_s(cad3, cad2);// cad3 = "esto0 es una cadena de ejemplo"

    cout << cad3 << endl;




    return 0;
}


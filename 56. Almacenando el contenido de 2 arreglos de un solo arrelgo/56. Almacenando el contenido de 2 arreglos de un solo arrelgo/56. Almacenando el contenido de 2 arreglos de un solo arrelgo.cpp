// 56. Almacenando el contenido de 2 arreglos de un solo arrelgo.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    char letras1[] = { 'a','b','c','d','e' };
    char letras2[] = { 'f','g','h','i','j' };
    char letras3[10];

    //copiando los elementos del arreglo letras 1 hacia letras 3

    for (int i = 0; i < 5; i++) {
        letras3[i] = letras1[i];
    }

    //copiando los elementos de letras2 hacia letras3

    for (int i = 5; i < 10; i++) {
        letras3[i] = letras2[i - 5];
    }


    //mostrar el nuevo vector
    for (int i = 0; i < 10; i++) {
        cout << letras3[i] << endl;
    }

    



    system("pause");
    return 0;
}


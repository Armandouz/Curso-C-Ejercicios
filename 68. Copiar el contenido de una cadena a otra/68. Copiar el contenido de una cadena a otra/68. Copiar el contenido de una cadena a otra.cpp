// 68. Copiar el contenido de una cadena a otra.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;


int main()
{
	char nombre[] = "Alejandro";
	char nombre2[20];

	strcpy_s(nombre2, nombre);

	cout << nombre2 << endl;



	return 0;
}


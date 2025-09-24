// 71. Comparando 2 cadenas de caracteres.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string.h>
#include <conio.h>

using namespace std;

int main()
{
	char palabra1[30], palabra2[30];

	cout << "Digite una palabra: ";
	cin.getline(palabra1, 30, '\n');

	cout << "Digite otra palabra: ";
	cin.getline(palabra2, 30, '\n');

	if (strcmp(palabra1, palabra2) == 0) {
		cout << "Ambas palabras son iguales";
	}
	else if (strcmp(palabra1, palabra2) > 0) {
		cout << palabra1 << " es mayor alfabeticamente";
	}
	else {
		cout << palabra2 << " es mayor alfabeticamente";
	}




	return 0;
}


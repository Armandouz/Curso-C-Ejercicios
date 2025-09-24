// 75. Determinar si una palabra es polindroma.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;


int main()
{
	char palabra[20];
	char palabra2[20];

	cout << "Digite una palabra: ";
	cin.getline(palabra, 20, '\n');


	strcpy_s(palabra2, palabra);

	_strrev(palabra2);//invirtiendo palabra 2

	if (strcmp(palabra, palabra2) == 0) {
		cout<<palabra << " es un polindromo";
	}
	else {
		cout << palabra << " no es un polindromo";
	}







	return 0;
}

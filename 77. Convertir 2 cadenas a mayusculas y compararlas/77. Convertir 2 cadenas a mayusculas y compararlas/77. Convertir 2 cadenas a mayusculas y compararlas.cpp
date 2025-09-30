// 77. Convertir 2 cadenas a mayusculas y compararlas.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main()
{
	char palabra1[20], palabra2[20];

	cout << "Digite una palabra: ";
	cin.getline(palabra1, 20, '\n');

	cout << "Digite otra palabra: ";
	cin.getline(palabra2, 20, '\n');



	//pasando a mayusculas ambas palabras
	_strupr_s(palabra1);
	_strupr_s(palabra2);


	if (strcmp(palabra1, palabra2) == 0) {
		cout << "Ambas palabras son iguales";
	}
	else {
		cout << "las palabras son distintas";
	}







	return 0;
}


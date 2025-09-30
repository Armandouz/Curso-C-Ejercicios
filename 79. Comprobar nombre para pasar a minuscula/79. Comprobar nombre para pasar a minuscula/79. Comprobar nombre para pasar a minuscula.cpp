// 79. Comprobar nombre para pasar a minuscula.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main()
{
	char nombre[20];

	cout << "Digite su nombre en mayusculas: ";
	cin.getline(nombre, 20, '\n');


	if (strncmp(nombre,"A", 1)==0)
	{
		_strlwr_s(nombre);
		cout << nombre << endl;
	}
	else {
		cout << "Nombre no comienza con la letra A";
	}








	return 0;
}


// 67. Comprobar longitud de una cadena.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
using namespace std;

int main()
{
	char frase[50];


	cout << "Digite una frase: ";
	cin.getline(frase, 50, '\n'); 
 
	if (strlen(frase) > 10) {
		cout << frase << endl;
	}
	else {
		cout << "La cadena no supera a los 10 caracteres" << endl;
	}


	return 0;
}


// 24.  Vocal minuscula y mayuscula.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int main()
{
	char letra;

	cout << "Ingrese un caracter: ";
	cin >> letra;

	switch (letra) {
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u': cout << "\nLa vocal es minusula ";
			break;
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U': cout << "\nLa vocal es mayuscula ";
			break;
		default: cout << "No es vocal ";

	}


	return 0;
}

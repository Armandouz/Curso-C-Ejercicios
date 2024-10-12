// 23. Comprobar si un caracter es una vocal minuscula.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;
int main()
{
	char letra;


	cout << "Digite un caracter: ";
	cin >> letra;


	switch (letra)
	{
	case 'a':
	case 'e':
	case 'i':
	case 'o': 
	case 'u':cout << "Es una vocal minuscula";
		break;
	default: cout << "No es una vocal miniscula";
		break;
	}



	return 0;
}

// 18. La sentencia switch.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int main()
{
	int numero;

	cout << "Ingrese un numero entre 1 y 5: ";
	cin >> numero;


	switch (numero)
	{
	case 1: cout << "Es el numero 1";
		break;

	case 2: cout << "Es el numero 2";
		break;

	case 3: cout << "Es el numero 3";
		break;

	case 4: cout << "Es el numero 4";
		break;

	case 5: cout << "Es el numero 5";
		break;

	default: "No esta en el rango de 1 a 5 ";
	
	}

 

	return 0;
}


// 17. Sentencia if.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;


int main()
{
	int numero, dato = 5;

	cout << "Ingrese un numero: ";
	cin >> numero;

	if (numero == dato) {
		cout << "El numero es igual a 5";
	}
	else {
		cout << "El numero es diferente de 5";
	}
 


	return 0;
}


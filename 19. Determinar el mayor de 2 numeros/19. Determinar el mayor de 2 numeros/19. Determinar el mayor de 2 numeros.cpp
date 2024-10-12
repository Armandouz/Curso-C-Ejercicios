// 19. Determinar el mayor de 2 numeros.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int main()
{
	int numero1, numero2;

	cout << "Ingrese el primer numero: ";
	cin >> numero1;

	cout << "Ingrese el segundo numero: ";
	cin >> numero2;

	if (numero1 == numero2) {
		cout << "Ambos numeros son iguales";
	}
	else if (numero1 > numero2) {
		cout << "El numero mayor es: "<<numero1;
	}
	else {
		cout << "El numero mayor es: "<< numero2;
	}
	

	return 0;
}


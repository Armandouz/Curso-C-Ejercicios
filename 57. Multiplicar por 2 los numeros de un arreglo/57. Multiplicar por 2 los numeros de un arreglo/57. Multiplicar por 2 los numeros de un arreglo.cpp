// 57. Multiplicar por 2 los numeros de un arreglo.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int numeros[5], numeros2[5];



	//primero pedimos los elementos de un vector
	for (int i = 0; i < 5; i++) {
		cout << ". Digite los elementos del arreglo: ";
		cin >> numeros[i];
	}
	//ahora vamos a multiplciar por 2 los n del arreglo

	for (int i = 0; i < 5; i++) {
		numeros2[i] = numeros[i] * 2;

	}


	cout << "\Mostrando los elementos del arreglo por 2; \n";
	for (int i = 0; i < 5; i++) {
		cout << numeros2[i] << " ";
	}

	system("pause");
	return 0;
}


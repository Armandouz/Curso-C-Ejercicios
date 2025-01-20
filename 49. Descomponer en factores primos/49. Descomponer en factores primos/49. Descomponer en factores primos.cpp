// 49. Descomponer en factores primos.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int numero;


	cout << "Digite un numero: ";
	cin >> numero;

	for (int i = 2; numero > 1; i++) {
		while (numero % i == 0) {
			cout << i << " ";
			numero /= i;
		}
	}







	system("pause");
	return 0;
}


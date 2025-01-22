// 54. Mayor elemento de un arreglo.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int numeros[100], n, mayor = 0;


	cout << "Digite el numero de elementos del arrelgo: ";
	cin >> n;

	for (int i = 0; i < n; i++) {
		cout << i + 1 << ". Digite un numero: ";
		cin >> numeros[i];


		if (numeros[i] > mayor) {
			mayor = numeros[i];
		}
	}

	cout << "\ El auor elemento del vector es: " << mayor << endl;




	system("pause");
	return 0;
}

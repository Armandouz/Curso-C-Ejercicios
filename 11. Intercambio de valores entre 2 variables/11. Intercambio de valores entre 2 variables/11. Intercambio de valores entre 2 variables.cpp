// 11. Intercambio de valores entre 2 variables.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;


int main()
{
	int  x, y, aux;

	cout << "Ingrese el valor de X: ";
	cin >> x;

	cout << "Ingrese el valor de Y: ";
	cin >> y;

	aux = x;
	x = y;
	y = aux;

	cout << "\n El nuevo valor de X es: " << x << endl;
	cout << "El nuevo valor de Y es: " << y << endl;

   





	return 0;
}


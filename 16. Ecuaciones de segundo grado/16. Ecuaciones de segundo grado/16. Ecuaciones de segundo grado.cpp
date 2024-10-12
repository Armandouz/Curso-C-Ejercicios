// 16. Ecuaciones de segundo grado.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <math.h>
using namespace std;


int main()
{
	float a, b, c, resultado1 = 0, resultado2 = 0;

	cout << "Ingrese el valor de A: ";
	cin >> a;

	cout << "Ingrese el valor de B: ";
	cin >> b;

	cout << "Ingrese el valor de C: ";
	cin >> c;

	resultado1 = ( - b + (sqrt(pow(b, 2) - (4 * a * c)))) / (2 * a);
	resultado2 = ( - b - (sqrt(pow(b, 2) - (4 * a * c)))) / (2 * a);



	cout << "\nEl resultado 1 es: " << resultado1;
	cout << "\nEl resultado 2 es: " << resultado2;


	return 0; 
}

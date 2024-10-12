// 10. Expresiones 2.1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int main()
{
	float a, b, c, d, resultado = 0;


	cout << "Ingrese el valor de A: ";
	cin >> a;

	cout << "Ingrese el valor de B: ";
	cin >> b;

	cout << "Ingrese el valor de C: ";
	cin >> c;

	cout << "Ingrese el valor de B: ";
	cin >> d;

	resultado = a + (b / (c - d));

	cout.precision(2);
	cout << "El resulado es: " << resultado;





	return 0;
}


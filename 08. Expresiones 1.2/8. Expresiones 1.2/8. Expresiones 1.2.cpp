// 8. Expresiones 1.2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int main()
{
	float a, b, c, d, resultado = 0;

	cout << "Ingrese el valor de a: ";
	cin >> a;

	cout << "Ingrese el valor de b: ";
	cin >> b;

	cout << "Ingrese el valor de c: ";
	cin >> c;

	cout<<"Ingrese el valor de d: ";
	cin >> d;

	resultado = (a + b) / (c + d);

	cout.precision(2);

	cout << "\n El resultado de la expresion es: " << resultado;



	return 0;
}


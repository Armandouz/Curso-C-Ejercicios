// 9. Expresiones 2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int main()
{
	float a, b, c, d, e, f, resultado = 0;

	cout << "Ingre el valor de A: ";
	cin >> a;

	cout<<"Ingrese el valor de B: ";
	cin >> b;

	cout << "Ingrese el valor de C: ";
	cin >> c;
	
	cout << "Ingrese el valor de D: ";
	cin >> d;

	cout << "Ingrese el valor de E: ";
	cin >> e;

	cout << "Ingrese el valor de F: ";
	cin >> f;


	
	resultado = (a + (b / c)) /  (d + (e / f));
	cout.precision(2);
	cout << "\n El resultado es: " << resultado;







	return 0;
}


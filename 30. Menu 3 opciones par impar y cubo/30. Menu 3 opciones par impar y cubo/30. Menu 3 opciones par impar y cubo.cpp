// 30. Menu 3 opciones par impar y cubo.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int opcion, n1, resultado = 0;

	cout << "\t Menu";
	cout << "\n1. cubo de un numero";
	cout << "\n2. Numero par o impar";
	cout << "\n3. Salir";
	cout << "\nDigite una opcion: ";
	cin >> opcion;


	switch (opcion)
	{
	case 1: cout << "\nIngrese un numero: ";
		cin >> n1;

		resultado = pow(n1, 3);

		cout << "\nEl numero al cubo es: " << resultado;
		break;

	case 2:
		cout << "\nIngrese el numero: ";
		cin >> n1;

		if (n1 == 0) {
			cout << "\nmEl numero es cero ";
		}
		else if (n1 % 2 == 0) {
			cout << "\nEl numero es par ";
		}
		else {
			cout << "\nEl numero es impar ";
		}

	case 3:
		break;

	}

	return 0;
}


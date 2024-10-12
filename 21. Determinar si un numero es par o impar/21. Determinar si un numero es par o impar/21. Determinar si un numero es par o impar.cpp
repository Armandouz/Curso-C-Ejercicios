// 21. Determinar si un numero es par o impar.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int main()
{
	int n1;

	cout << "Ingrese el numero: ";
	cin >> n1;

	if (n1 == 0) {
		cout << "El numero es cero ";
	}
	else if (n1 %2 ==0) {
		cout << "El numero es par ";
	}
	else {
		cout << "El numper es impar ";
	}

	
	return 0;
}


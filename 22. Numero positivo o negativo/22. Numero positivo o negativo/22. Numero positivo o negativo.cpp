// 22. Numero positivo o negativo.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int main()
{
	int n1;

	cout << "Ingrese el numero: ";
	cin >> n1;

	if (n1 == 0) {
		cout << "Numero neutro ";
	}
	else if (n1 < 0) {
		cout << "Numero negativo";
	}
	else {
		cout << "Numero positivo: ";
	}
 

	return 0;
}

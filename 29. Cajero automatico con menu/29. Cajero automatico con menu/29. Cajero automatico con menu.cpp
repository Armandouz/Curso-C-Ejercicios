// 29. Cajero automatico con menu.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int main()
{
	int saldo_inicial = 1000, opc;
	float extra, saldo = 0, retiro;

	cout << "\t Bienvenido a su cajero virtual";
	cout << "\n1. Ingresar dinero en cuenta";
	cout << "\n2. Retirar dinero de la cuenta";
	cout << "\n3. Salir";
	cout << "\nOpcion: ";
	cin >> opc;

	switch (opc) {
	case 1: 
		cout << "Digite la cantidad de dinero a ingresar: ";
		cin >> extra;
		saldo = saldo_inicial + extra;
		cout << "Dinero en cuenta: " << saldo;
		break;
	case 2: 
		cout << "Digite la cantidad de dinero a retirar: ";
		cin >> retiro;

		if (retiro > saldo_inicial) {
			cout << "No tiene esa cantidad de efectivo";
		}
		else {
			saldo = saldo_inicial - retiro;
			cout << "Dinero en cuenta: " << saldo;
		}
	case 3: break;
	}

	return 0;
}


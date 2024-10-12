// 26. Coincidencia de numeros.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int main()
{
	int n1, n2, n3, n4;

	cout << "Ingrese el primer numero: ";
	cin >> n1;

	cout << "Ingrese el segundo numero: ";
	cin >> n2;

	cout << "Ingrese el tercer numero: ";
	cin >> n3;

	cout << "Ingrese el cuarto numero: ";
	cin >> n4;

	if ((n1 == n4) || (n2 == n4) || (n3 == n4)) {
		cout << "\n El cuarto numero coincide con al menos 1 de los 3 anteriores";
	}
	else{
		cout << "\n El cuarto numero no coincide con ninguno";
	}





	return 0;
}

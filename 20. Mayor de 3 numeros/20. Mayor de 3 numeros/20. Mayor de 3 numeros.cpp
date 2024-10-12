// 20. Mayor de 3 numeros.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int main()
{
	int n1, n2, n3;

	cout << "Ingrese el primer numero: ";
	cin >> n1;

	cout << "Ingrese el segundo numero: ";
	cin >> n2;

	cout << "Ingrese el tercer numero: ";
	cin >> n3;

	if ((n1 >= n2) && (n1 >= n3)) {
		cout << "\n El mayor es: "<<n1;
	}
	else if ((n2 >= n1) && (n2>=n3)) {
		cout << "\n El mayor es: "<<n2;
	}
	else {
		cout << "\n El mayor es: " << n3;
	}




	return 0;
}

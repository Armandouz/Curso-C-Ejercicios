// 45. Sumar 1-23-4---n.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main()
{
	int nElementos, par, sumaPares = 0, sumaImpares = 0, sumaTotal = 0;


	cout << "Digite el numero de elementos a sumar: ";
	cin >> nElementos;
   

	for (int i = 1; i <= nElementos; i++) {
		if (i % 2 == 0) {
			par = i * -1;
			sumaPares += par;
		}

		else {
			sumaImpares += i;
		}
	}

	sumaTotal = sumaImpares + sumaPares;

	cout << "\n EL resultado de la suma es: " << sumaTotal;


	system("pause");
	return 0;
}


// 39. Calcular X elevado a la Y.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <stdlib.h>
using namespace std;


int main()
{
	int x, y, elevacion = 1;

	cout << "Ingrese el valor de X: ";
	cin >> x;
	
	cout << "Ingrese el valor de Y: ";
	cin >> y;

	for (int i = 1; i <=y ; i++)
	{
		elevacion = elevacion * x;
	}

	cout << "El resultado de la elevacion es: " << elevacion << "\n";


	system("pause");	

	return 0;
}


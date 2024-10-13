// 36. Ejercicio 3 suma de cuadrados.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int suma = 0, cuadrado;

	for (int i = 1; i<=10; i++)
	{
		cuadrado = i * i;
		suma = suma + cuadrado;	
	}

	cout << "El resultado de la suma es: " << suma << "\n";

	system("pause");
	return 0;
}

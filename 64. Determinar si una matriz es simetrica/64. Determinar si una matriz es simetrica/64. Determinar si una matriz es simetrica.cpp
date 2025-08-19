// 64. Determinar si una matriz es simetrica.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;


int main()
{
	int numeros[100][100], filas, columnas;
	char band = 'F';

	cout << "Digite el numero de filas: ";
	cin >> filas;

	cout << "Digite el numero de columnas: ";
	cin >> columnas;

	for (int i = 0; i < filas; i++)
	{
		for (int j = 0; j < columnas; j++)
		{
			cout << "Digite un numero [" << i << "][" << j << "]: ";
			cin >> numeros[i][j];
		}
		cout << endl;
	}

	if (filas ==columnas)
	{
		for (int i = 0; i < filas; i++)
		{
			for (int j = 0; i < columnas; i++)
			{
				if (numeros[i][j] == numeros[j][i]){				
					band = 'V';
				}
			}
		}
	}


	if (band == 'V')
	{
		cout << "La matriz en simetrica:";
	}
	else {
		cout << "La matriz no es simetrica";
	}


	return 0;
}


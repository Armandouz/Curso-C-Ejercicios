// 59. Mostrando la diagonal principal de una matriz.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int numeros[3][3] = { {1,2,3},{4,5,6},{7,8,9} };

	cout << "mostrando matriz completa";

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << numeros[i][j];
		}
		cout << endl;

	}


	cout << "\nmostrando diagonal de matriz\n";

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (i==j)
			{
				cout << numeros[i][j] << endl;;
			}
		}

	}


    return 0;
}

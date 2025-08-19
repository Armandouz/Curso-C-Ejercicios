// Corrección: Cambiar 'i++' por 'j++' en los bucles internos para recorrer correctamente las columnas

#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
	int numeros[100][100], dato, nfilas, ncol;
	int numeros2[100][100];
  
	cout << "Digite el numero de filas: ";
	cin >> nfilas;

	cout << "Digite el numero de columnas: ";
	cin >> ncol;

	srand(time(NULL)); //generar numeros aleatorios

	//rellenando la matriz de numeros aleatorios
	for (int i = 0; i < nfilas; i++)
	{
		for(int j = 0; j < ncol; j++)
		{
			dato = 1 + rand() % (100); // generando numeros aleatorios entre 1 y 100
			numeros[i][j] = dato;

		}
	}

	// copiando el contenido a otra matriz
	for (int i = 0; i < nfilas; i++)
	{
		for (int j = 0; j < ncol; j++)
		{
			numeros2[i][j] = numeros[i][j];
		}
	}

	//imprimiendo matriz numeros2 en pantalla
	for (int i = 0; i < nfilas; i++)
	{
		for (int j = 0; j < ncol; j++)
		{
			cout << numeros2[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}

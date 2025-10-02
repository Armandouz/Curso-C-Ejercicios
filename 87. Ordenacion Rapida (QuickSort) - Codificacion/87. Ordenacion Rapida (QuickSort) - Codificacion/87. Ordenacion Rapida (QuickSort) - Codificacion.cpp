// 87. Ordenacion Rapida (QuickSort) - Codificacion.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <conio.h>
using namespace std; 


void intercambio(float& x, float& y) {
	float aux;
	
	aux = x;
	x = y;
	y = aux;
}

void quickSort(float a[], int primero, int ultimo) {
	int i, j, central;
	float pivote;

	central = (primero + ultimo) / 2;
	pivote = a[central];
	i = primero;
	j = ultimo;
	
	do
	{
		while (a[i] < pivote) i++;
		while (a[j] > pivote) j--;

		if (i<=j)
		{
			intercambio(a[i], a[j]);
			i++;
			j--;

		}
	} while (i<=j);

	if (primero < j) {
		quickSort(a, primero, j);// ordenamos la sublista izquierda
	}
	if (i <ultimo)
	{
		quickSort(a, i, ultimo);//ordenamos la sublista derecha
	}
}

int main()
{
	float arreglo[] = { 4,7,1,8,2,10,5,9 };
   
	quickSort(arreglo, 0, 7);

	cout << "Arreglo ordenado de forma ascendente" << endl;
	for (int i = 0; i < 8; i++)
	{
		cout << arreglo[i] << " | ";
	}


	cout << "\nArreglo ordenado de forma descendente" << endl;
	for (int i = 7; i >=0; i--)
	{
		cout << arreglo[i] << " | ";
	}


	return 0;
}


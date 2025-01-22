// 55. Determinar si un numero en un arreglo equivale a la suma.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int numeros[5] = { 1,2,3,4,10 };
	int suma = 0, mayor = 0;


	for (int i = 0; i < 5; i++) {
		suma += numeros[i];


		if (numeros[i] > mayor) {
			mayor = numeros[i];
		}
	}


	if (mayor == suma - mayor) {
		cout << " El numero " << mayor << " equivale a la suma de los demas";
	}
	else {
		cout << " No existe ningun numero que sea igual a la suma de los demas";
	}
   


	system("pause");
	return 0;
}

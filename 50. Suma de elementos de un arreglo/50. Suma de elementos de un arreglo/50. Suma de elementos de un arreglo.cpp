// 50. Suma de elementos de un arreglo.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int numeros[] = { 1,2,3,4,5 };
	int suma = 0;


	for (int i = 0; i < 5; i++) {
		suma += numeros[i];
	}
   


	cout << "la suma de los elementos del vectos es: " << suma << endl;









	system("pause");
	return 0;
}


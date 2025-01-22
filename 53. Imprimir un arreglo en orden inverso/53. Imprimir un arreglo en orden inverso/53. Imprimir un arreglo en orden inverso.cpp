// 53. Imprimir un arreglo en orden inverso.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int numeros[5] = { 1,2,3,4,5 };

	for (int i = 4; i >= 0; i--) {
		cout << numeros[i] << endl;
	}
    

	system("pause");
	return 0;
}


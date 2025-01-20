// 42. Factorial de un número.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int numero, factorial = 1;

	cout << "Digite un numero: ";
	cin >> numero;


	for (int i = 1; i <= numero ; i++)
	{
		factorial *= i;
	}
	cout << "\n El factorial del numero es: " << factorial << endl;



	system("pause");
	return 0; 
}
// 48. Numero magico.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
	int numero, dato, contador = 0;


	srand(time(NULL));
	dato = 1 + rand() % (100);
 

	do {
		cout << "\n Digite un numero: ";
		cin >> numero;

		if (numero > dato) {
			cout << "\n Digite un numero menor\n";
		}
		if (numero < dato) {
			cout << "\n Digite un numero mayor\n";
		}
		contador++;
	} while (numero != dato);

	cout << "\n Felicidades adivinaste el numero\n";
	cout << "Numero de intentos: " << contador << endl;

	system("pause");
	return 0;
}


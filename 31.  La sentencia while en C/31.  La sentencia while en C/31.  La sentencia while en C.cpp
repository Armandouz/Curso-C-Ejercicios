// 31.  La sentencia while en C.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <conio.h>// para comprobar ejecutable con pausa con getch();
using namespace std;

int main()
{
	int i;

	i = 10;

	while (i >= 1) {
		cout << i << endl;
		i--;
	}

	getch();//sirve para poner una pausa
	return 0;
}


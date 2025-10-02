// 90. Estructura básica.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <conio.h>
using namespace std;

struct persona {
	char nombre[20];
	int edad;
}
persona1 = { "Armando", 20 },
persona2 = { "Karla",15 };



int main()
{
	cout << "Nombre1: " << persona1.nombre << endl;
	cout << "Edad1: " << persona1.edad<<endl<<endl;

	cout << "Nombre2: " << persona2.nombre<<endl;
	cout << "Edad2: " << persona2.edad<<endl;



	return 0;
}


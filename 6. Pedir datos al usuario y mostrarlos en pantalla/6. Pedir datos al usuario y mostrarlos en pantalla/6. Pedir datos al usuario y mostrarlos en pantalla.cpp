// 6. Pedir datos al usuario y mostrarlos en pantalla.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int main()
{
	int edad;
	char sexo[10];
	float altura;

	cout << "Ingrese su edad: ";
	cin >> edad;

	cout << "Ingrese su sexo: ";
	cin >> sexo;
	
	cout << "Ingrese su altura en metros: ";
	cin >> altura;


	cout << "\n La edad es: " << edad;
	cout << "\n el seso es: " << sexo;
	cout << "\n la altura es: " << altura;



	return 0;
}


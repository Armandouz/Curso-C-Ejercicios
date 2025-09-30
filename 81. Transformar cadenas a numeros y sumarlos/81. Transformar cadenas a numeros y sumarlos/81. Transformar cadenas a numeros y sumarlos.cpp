// 81. Transformar cadenas a numeros y sumarlos.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

int main()
{
	char cad1[10], cad2[10];
	int valorEntero;
	float valorFlotante;

	//guardar los numeros como cadenas;
	cout << "Digite un valor entero: ";
	cin.getline(cad1, 10, '\n');

	cout << "Digite un valor flotante: ";
	cin.getline(cad2, 10, '\n');

	//transformamos las cadenas a numeros

	valorEntero = atoi(cad1);
	valorFlotante = atof(cad2);


	//sumar los 2 nuumeros
	cout << "La suma es: " << valorEntero + valorFlotante<<endl;






	return 0;
}


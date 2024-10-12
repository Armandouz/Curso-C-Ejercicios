// 13. Porcentaje de notas de un alumno.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int main()
{
	float practica, teorica, participacion, notaFinal = 0;

	cout << "Ingrese la nota de practica: ";
	cin >> practica;

	cout << "Ingrese la nota teoricas: ";
	cin >> teorica;

	cout << "Ingrese la nota de participacion: ";
	cin >> participacion;

	practica *= 0.30;
	teorica *= 0.60;
	participacion *= 0.10;

	notaFinal = practica + teorica + participacion;

	cout << "\n La nota final es: " << notaFinal;





	return 0;
}

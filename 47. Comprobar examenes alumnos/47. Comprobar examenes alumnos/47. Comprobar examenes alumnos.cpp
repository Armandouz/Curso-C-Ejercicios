// 47. Comprobar examenes alumnos.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	float examen1, examen2, examen3;
	int aprobadosTodos = 0, aprobadosUno=0, aprobadosUltimo=0;



	for (int i = 1; i <= 5; i++) {

		cout << i << ". Digite la nota del primer examen: ";
		cin >> examen1;

		cout << i << ". Digite la nota del segundo examen: ";
		cin >> examen2;

		cout << i << ". Digite la nota del tercer examen: ";
		cin >> examen3;
		cout << "\n";

		if ((examen1 > 10.5) && (examen2 > 10.5) && (examen3 > 10.5)) {
			aprobadosTodos++;
		}
		if ((examen1 > 10.5) || (examen2 > 10.5) || (examen3 > 10.5)) {
			aprobadosUno++;
		}

		if ((examen1 < 10.5) && (examen2 < 10.5) && (examen3 > 10.5)) {
			aprobadosUltimo++;
		}
	}

		cout << "\N Alumnos que aprobaron todos los examens: " << aprobadosTodos << endl;
		cout << "\N Alumnos que al menos aprobaron un examen: " << aprobadosUno << endl;
		cout << "\N Alumnos que aprobaron el ultimo examen: " << aprobadosUltimo << endl;




	system("pasue");
	return 0;
}


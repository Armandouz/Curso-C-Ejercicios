// 93. Mejor promedio de 3 alumnos.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <conio.h>
using namespace std;

struct alumno {
	char nombre[20];
	int edad;
	float promedio;
}alumnos[3];


int main()
{
	float mayor = 0;
	int pos;

	for (int i = 0; i < 3; i++)
	{
		//guardando los datos para 3 alumnos
		cout << i + 1 << ". Digite su nombre: ";
		cin.getline(alumnos[i].nombre, 20, '\n');
		
		
		cout << i + 1 << ". Digite su edad: ";
		cin>>alumnos[i].edad;

		cout << i + 1 << ". Digite su promedio: ";
		cin >> alumnos[i].promedio;

		cin.ignore();

		cout << endl;

		if (alumnos[i].promedio>mayor)
		{
			mayor = alumnos[i].promedio;
			pos = i;
		}

	}


	//imprimiendo datos del mejor promedio
	cout << "\nNombre:" << alumnos[pos].nombre << endl;
	cout << "Edad: " << alumnos[pos].edad<<endl;
	cout << "Promedio: " << alumnos[pos].promedio << endl;





	return 0;
}

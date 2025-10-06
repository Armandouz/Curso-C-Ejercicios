// 95. Mayor numero de medallas.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <conio.h>
using namespace std;

struct atleta {
	char nombre[20];
	char pais[20];
	int numero_medallas;
}atletas[100];

int main()
{
	int nAtletas, mayor = 0, pos;

	cout << "Digite el numero de atletas: ";
	cin >> nAtletas;
	cin.ignore();

	for (int i = 0; i < nAtletas; i++)
	{
		cout << i + 1 << ". Digite su nombre: ";
		cin.getline(atletas[i].nombre, 20, '\n');

		cout <<i+1<< ". Digite su pais: ";
		cin.getline(atletas[i].pais, 20, '\n');

		cout << i + 1 << ". Digite el numero de medallas ganadas: ";
		cin >> atletas[i].numero_medallas;
		cin.ignore();


		cout << endl;

		if (atletas[i].numero_medallas>mayor)
		{
			mayor = atletas[i].numero_medallas;
			pos = i;
		}
	}

	//imprimiendo los datos del mejor atleta
	cout << "Nombre: " << atletas[pos].nombre << endl;
	cout << "Pais: " << atletas[pos].pais << endl;



	return 0;
}

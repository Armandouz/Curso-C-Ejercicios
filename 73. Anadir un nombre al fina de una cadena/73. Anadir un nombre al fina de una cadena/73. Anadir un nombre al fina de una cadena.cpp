// 73. Anadir un nombre al fina de una cadena.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main()
{  
	char cad[50] = "Hola que tal ";
	char cad2[20];

	cout << "Digite su nomre: ";
	cin.getline(cad2, 20, '\n');

	strcat_s(cad, cad2);// concatenando las 2 cadenas

	cout<<" frase: "<<cad<<endl;






	return 0;
}

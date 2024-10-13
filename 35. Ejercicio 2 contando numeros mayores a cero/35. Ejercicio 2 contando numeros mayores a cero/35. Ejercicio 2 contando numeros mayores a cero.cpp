// 35. Ejercicio 2 contando numeros mayores a cero.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int numero, conteo = 0;

	do
	{
		cout<<"Digite un numero: ";	
		cin >> numero;	

		if(numero >0){
			conteo++;
		}

	} while (numero != 0);

	cout<<"\El numero de valores mayores a cero introducidos es: "<<conteo<<endl;


   
	system("pause");
	return 0;
}



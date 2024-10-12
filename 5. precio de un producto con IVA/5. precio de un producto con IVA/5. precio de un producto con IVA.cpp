// 5. precio de un producto con IVA.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int main()
{
	float precio, iva, precioFinal;

	cout << "Digite el preico del producto: ";
	cin >> precio;
	

	iva = precio*0.14;

	precioFinal = precio + iva;

	cout << "\n el precio final es: " << precioFinal;



	return 0;
}


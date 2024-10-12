// 14. Hipotenusa de un triangulo rectangulo.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	float cateto1, cateto2, hipotenusa;

	cout << "Ingrese el cateto 1: ";
	cin >> cateto1;

	cout << "Ingrese el cateto 2: ";
	cin >> cateto2;

	//srqt es la funcion de la raiz cuadrada
	//pow es para elevar a la potencia que uno quiera
	hipotenusa = sqrt(pow(cateto1, 2) + pow(cateto2, 2));

	cout.precision(2);
	cout << "\n La hipotenusa del triangulo es " << hipotenusa<<endl;
  



	return 0;
}

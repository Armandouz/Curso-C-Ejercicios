// 51. Multiplicación de los elementos de un arreglo.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int numeros[5] = { 1,2,3,4,5 };
    int multiplicacion = 1;

    for (int i = 0; i < 5; i++) {

        multiplicacion *= numeros[i];
    }
    
    cout << "la multiplicacion de los elementos es: " << multiplicacion << endl;


    system("pause");
    return 0;
}


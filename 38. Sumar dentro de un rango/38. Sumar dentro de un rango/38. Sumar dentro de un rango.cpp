// 38. Sumar dentro de un rango.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{ int numero, suma = 0;

    do {
        cout<<"Digite un numero: ";
        cin >> numero;

        if (numero > 0) {
            suma += numero;
        }

    } while (((numero < 20) || (numero > 30)) && (numero != 0));

    cout << "\nLa suma de los numeros es: " << suma << endl;


    return 0;
}



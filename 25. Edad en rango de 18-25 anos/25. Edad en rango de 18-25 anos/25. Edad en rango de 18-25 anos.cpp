// 25. Edad en rango de 18-25 anos.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int main()
{
    int edad;

    cout << "Ingrese su edad: ";
    cin >> edad;


    if ((edad >= 18) && (edad <= 25)) {
        cout<<"Su edad esta en el rango de [18-25]";
    }
    else {
        cout<<"Su edad no esta en dicho rango";
    }

    return 0;
}


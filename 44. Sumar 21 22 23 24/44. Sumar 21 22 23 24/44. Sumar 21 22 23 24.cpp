// 44. Sumar 21 22 23 24.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main()
{
    int suma = 0, elevacion = 0, n;


    cout << "Digiite el numero de elementos a sumar: ";
    cin >> n;

    for (int i = 1; i <=n; i++)
    {
        elevacion = pow(2, i);
        suma += elevacion;
    }

    cout << "\n La suma total es: " << suma << endl;

  


    system("pause");
    return 0;
}

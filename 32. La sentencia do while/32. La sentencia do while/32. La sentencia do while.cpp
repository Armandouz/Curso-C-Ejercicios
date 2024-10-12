// 32. La sentencia do while.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <stdlib.h>// para pausar el programa o ejectuble con system("pause")
using namespace std;

int main()
{
    int i;

    i = 10;

    do {
        cout << i << endl;
        i--;//decremnenta el iterador de 1 en 1
    } while (i >= 1);


    system("pause");// para pausar el programa o ejectuble
    return 0;
}

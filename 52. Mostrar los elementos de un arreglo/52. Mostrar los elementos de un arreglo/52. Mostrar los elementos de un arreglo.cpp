#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int numeros[100], n;

    cout << "Digite el numero de elementos que va a terner el arreglo: ";
    cin >> n;

    for (int i = 0; i < n; i++) {

        cout << "Digite un numero: ";
        cin >> numeros[i];//guardando todos los elementos del vector
    }

    //ahora vamos a mostrar los elementos con sus indices asociados

    for (int i = 0; i < n; i++) {
        cout << i << " -> " << numeros[i]<<endl;
    }


    system("pause");
    return 0;
}


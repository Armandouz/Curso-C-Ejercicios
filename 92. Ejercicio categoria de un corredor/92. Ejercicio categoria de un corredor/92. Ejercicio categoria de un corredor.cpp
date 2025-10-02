// 92. Ejercicio categoria de un corredor.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <conio.h>
#include <cstring>
using namespace std;

struct corredor {
    char nombre[20];
    int edad;
    char sexo[20];
    char club[20];
} c1;

int main()
{
    char categoria[20];

    cout << "Nombre: ";
    cin.getline(c1.nombre, 20, '\n');

    cout << "Edad: ";
    cin >> c1.edad;
    cin.ignore(); // Limpiar el salto de línea pendiente

    cout << "Sexo: ";
    cin.getline(c1.sexo, 20, '\n');

    cout << "Club: ";
    cin.getline(c1.club, 20, '\n');

    if (c1.edad <= 18)
    {
        strcpy_s(categoria, "Juvenil");
    }
    else if (c1.edad <= 40)
    {
        strcpy_s(categoria, "Senior");
    }
    else {
        strcpy_s(categoria, "Veterano");
    }

    cout << "\n\nDatos del corredor: ";
    cout << "\nNombre: " << c1.nombre << endl;
    cout << "Edad: " << c1.edad << endl;
    cout << "Sexo: " << c1.sexo << endl;
    cout << "Club: " << c1.club << endl;
    cout << "Categoria: " << categoria << endl;

    return 0;
}
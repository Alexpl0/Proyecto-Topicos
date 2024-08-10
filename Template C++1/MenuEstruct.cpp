#include "MenuEstruct.h"

void MenuEstruct::Menu()
{
    cout << "Elija la primera estructura que desee crear" << endl;
    cout << " 1.- Lista \n 2.-Arreglo\n 3.-Arbol\n 4.-Cola\n 5.-Pila" << endl;
    cin >> est1;
    cout << "Elija la segunda estructura que desee crear" << endl;
    cout << " 1.- Lista \n 2.-Arreglo\n 3.-Arbol\n 4.-Cola\n 5.-Pila" << endl;
    cin >> est2;
}

void MenuEstruct::select(int estn)
{
    switch (estn)
    {
    case 1:
        cout << "La estructura seleccionada fue: Lista" << endl;
        break;

    case 2:
        cout << "La estructura seleccionada fue: Arreglo" << endl;
        break;

    case 3:
        cout << "La estructura seleccionada fue: Arbol" << endl;
        break;

    case 4:
        cout << "La estructura seleccionada fue: Cola" << endl;
        break;

    case 5:
        cout << "La estructura seleccionada fue: Pila" << endl;
        break;
    default:
        break;
    }
}

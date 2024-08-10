#include <iostream>
#include "MenuEstruct.h"
#include "Lista.h"
#include "Arreglo.h"
using namespace std;


int main()
{
    int numb = rand() % 1000; // Numero a Buscar
    MenuEstruct est; //Creamos estructura de Menu a mostrar

    est.Menu(); // Muestra Menu
    est.select(est.est1); // Eleccion 1 del menu
    est.select(est.est2); // Eleccion 2 del menu
    Lista lista;
    int prob = 2;
    Arreglo arreglo;

    switch (est.est1) // crea la primera estructura elegida
    {
    case 1: //Caso Lista

        lista.i.asignum(lista.i.num); //Se asignan los numeros aleatorios creados por el numal
        //----------------------------------------------------------------------
        lista.i.valpunt(lista.i.num); // Funcion para convertir int* a int normal
        for (int i = 0; i < lista.i.rep; i++) {
           lista.i.valor[i] = *lista.i.val[i]; //#increible
        }
        //----------------------------------------------------------------------
        for (int i = 0; i < lista.i.rep; i++) 
        {
            lista.insertarLista(lista.listn, lista.i.valor[i]);// Una vez creados los int se asignan a la lista
        }

        lista.mostrarlista(lista.listn); // Se muestra la lista creada.
        cout << endl << endl;
        //----------------------------------------------------------------------
        break;

    case 2: // Caso Arreglo
        arreglo.asigarr();
        arreglo.mostrar(arreglo);
        break;

    case 3: //Caso Arbol
        cout << "La estructura seleccionada fue: Arbol" << endl;
        break;

    case 4: // Caso cola
        cout << "La estructura seleccionada fue: Cola" << endl;
        break;

    case 5: // Caso pila
        cout << "La estructura seleccionada fue: Pila" << endl;
        break;
    default:
        break;
    }
    return 0;
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

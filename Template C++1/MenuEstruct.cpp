#include "MenuEstruct.h"


using namespace std;

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

void MenuEstruct::stich(int est1, int est2)
{
    switch (est1) // crea la primera estructura elegida
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
        flor.arbol;
        flor.numarb();

        for (int i = 0; i < x; i++)
        {
            flor.crearNodo(flor.tree.valor[i]);
            flor.insertarNodo(flor.arbol, flor.tree.valor[i]);
        };
        //flor.mostrarArbol(flor.arbol);
        cout << endl;
        cout << endl;
        flor.imprimirArbol(flor.arbol, 1);
        cout << endl;

        break;

    case 4: // Caso cola
        cola.asigcol();
        cola.mostrar(cola);
        break;

    case 5: // Caso pila
        pila.asigpil();
        pila.mostrar(pila);
        break;

    default:
        break;
    }
    switch (est2) // crea la segubda estructura elegida
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
        flor.arbol;
        flor.numarb();

        for (int i = 0; i < x; i++)
        {
            flor.crearNodo(flor.tree.valor[i]);
            flor.insertarNodo(flor.arbol, flor.tree.valor[i]);
        };
        //flor.mostrarArbol(flor.arbol);
        cout << endl;
        cout << endl;
        flor.imprimirArbol(flor.arbol, 1);
        cout << endl;

        break;

    case 4: // Caso cola
        cola.asigcol();
        cola.mostrar(cola);
        break;

    case 5: // Caso pila
        pila.asigpil();
        pila.mostrar(pila);
        break;

    default:
        break;
    }
}

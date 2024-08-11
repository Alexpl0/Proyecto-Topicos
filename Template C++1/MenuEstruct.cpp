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

        lista.i.asignum(lista.i.num);
        lista2.i.asignum(lista2.i.num);
        lista3.i.asignum(lista3.i.num);//Se asignan los numeros aleatorios creados por el numal
        //----------------------------------------------------------------------
        lista.i.valpunt(lista.i.num); // Funcion para convertir int* a int normal
        for (int i = 0; i < lista.i.rep; i++) {
            lista.i.valor[i] = *lista.i.val[i]; //#increible
        }
        lista2.i.valpunt(lista2.i.num); // Funcion para convertir int* a int normal
        for (int i = 0; i < lista2.i.rep; i++) {
            lista2.i.valor[i] = *lista2.i.val[i]; //#increible
        }
        lista3.i.valpunt(lista3.i.num); // Funcion para convertir int* a int normal
        for (int i = 0; i < lista3.i.rep; i++) {
            lista3.i.valor[i] = *lista3.i.val[i]; //#increible
        }
        //----------------------------------------------------------------------
        for (int i = 0; i < lista.i.rep; i++)
        {
            lista.insertarLista(lista.listn, lista.i.valor[i]);// Una vez creados los int se asignan a la lista
        }
        for (int i = 0; i < lista2.i.rep; i++)
        {
            lista2.insertarLista(lista2.listn, lista2.i.valor[i]);// Una vez creados los int se asignan a la lista
        }
        for (int i = 0; i < lista3.i.rep; i++)
        {
            lista3.insertarLista(lista3.listn, lista3.i.valor[i]);// Una vez creados los int se asignan a la lista
        }

        lista.mostrarlista(lista.listn); // Se muestra la lista creada.
        cout << endl << endl;
        lista2.mostrarlista(lista2.listn); // Se muestra la lista creada.
        cout << endl << endl;
        lista3.mostrarlista(lista3.listn); // Se muestra la lista creada.
        cout << endl << endl;
        //----------------------------------------------------------------------
        break;

    case 2: // Caso Arreglo
        arreglo.asigarr();
        arreglo.mostrar(arreglo);
        cout << endl;

        arreglo2.asigarr();
        arreglo2.mostrar(arreglo2);
        cout << endl;

        arreglo3.asigarr();
        arreglo3.mostrar(arreglo3);
        cout << endl;
        break;

    case 3: //Caso Arbol
        flor.arbol;
        flor2.arbol;
        flor3.arbol;

        flor.numarb();
        flor2.numarb();
        flor3.numarb();

        for (int i = 0; i < x; i++)
        {
            flor.crearNodo(flor.tree.valor[i]);
            flor.insertarNodo(flor.arbol, flor.tree.valor[i]);
        };
        for (int i = 0; i < x; i++)
        {
            flor2.crearNodo(flor2.tree.valor[i]);
            flor2.insertarNodo(flor2.arbol, flor2.tree.valor[i]);
        };
        for (int i = 0; i < x; i++)
        {
            flor3.crearNodo(flor3.tree.valor[i]);
            flor3.insertarNodo(flor3.arbol, flor3.tree.valor[i]);
        };
        //flor.mostrarArbol(flor.arbol);
        cout << endl;
        cout << endl;
        flor.imprimirArbol(flor.arbol, 1);
        cout << endl;

        flor2.imprimirArbol(flor2.arbol, 1);
        cout << endl;

        flor3.imprimirArbol(flor3.arbol, 1);
        cout << endl;
        break;

    case 4: // Caso cola
        cola.asigcol();
        cola.mostrar(cola);

        cola2.asigcol();
        cola2.mostrar(cola2);

        cola3.asigcol();
        cola3.mostrar(cola3);
        break;

    case 5: // Caso pila
        pila.asigpil();
        pila.mostrar(pila);

        pila2.asigpil();
        pila2.mostrar(pila2);

        pila3.asigpil();
        pila3.mostrar(pila3);
        break;

    default:
        break;
    }
    switch (est2) // crea la primera estructura elegida
    {
    case 1: //Caso Lista

        lista.i.asignum(lista.i.num);
        lista2.i.asignum(lista2.i.num);
        lista3.i.asignum(lista3.i.num);//Se asignan los numeros aleatorios creados por el numal
        //----------------------------------------------------------------------
        lista.i.valpunt(lista.i.num); // Funcion para convertir int* a int normal
        for (int i = 0; i < lista.i.rep; i++) {
            lista.i.valor[i] = *lista.i.val[i]; //#increible
        }
        lista2.i.valpunt(lista2.i.num); // Funcion para convertir int* a int normal
        for (int i = 0; i < lista2.i.rep; i++) {
            lista2.i.valor[i] = *lista2.i.val[i]; //#increible
        }
        lista3.i.valpunt(lista3.i.num); // Funcion para convertir int* a int normal
        for (int i = 0; i < lista3.i.rep; i++) {
            lista3.i.valor[i] = *lista3.i.val[i]; //#increible
        }
        //----------------------------------------------------------------------
        for (int i = 0; i < lista.i.rep; i++)
        {
            lista.insertarLista(lista.listn, lista.i.valor[i]);// Una vez creados los int se asignan a la lista
        }
        for (int i = 0; i < lista2.i.rep; i++)
        {
            lista2.insertarLista(lista2.listn, lista2.i.valor[i]);// Una vez creados los int se asignan a la lista
        }
        for (int i = 0; i < lista3.i.rep; i++)
        {
            lista3.insertarLista(lista3.listn, lista3.i.valor[i]);// Una vez creados los int se asignan a la lista
        }

        lista.mostrarlista(lista.listn); // Se muestra la lista creada.
        cout << endl << endl;
        lista2.mostrarlista(lista2.listn); // Se muestra la lista creada.
        cout << endl << endl;
        lista3.mostrarlista(lista3.listn); // Se muestra la lista creada.
        cout << endl << endl;
        //----------------------------------------------------------------------
        break;

    case 2: // Caso Arreglo
        arreglo.asigarr();
        arreglo.mostrar(arreglo);
        cout << endl;

        arreglo2.asigarr();
        arreglo2.mostrar(arreglo2);
        cout << endl;

        arreglo3.asigarr();
        arreglo3.mostrar(arreglo3);
        cout << endl;
        break;

    case 3: //Caso Arbol
        flor.arbol;
        flor2.arbol;
        flor3.arbol;

        flor.numarb();
        flor2.numarb();
        flor3.numarb();

        for (int i = 0; i < x; i++)
        {
            flor.crearNodo(flor.tree.valor[i]);
            flor.insertarNodo(flor.arbol, flor.tree.valor[i]);
        };
        for (int i = 0; i < x; i++)
        {
            flor2.crearNodo(flor2.tree.valor[i]);
            flor2.insertarNodo(flor2.arbol, flor2.tree.valor[i]);
        };
        for (int i = 0; i < x; i++)
        {
            flor3.crearNodo(flor3.tree.valor[i]);
            flor3.insertarNodo(flor3.arbol, flor3.tree.valor[i]);
        };
        //flor.mostrarArbol(flor.arbol);
        cout << endl;
        cout << endl;
        flor.imprimirArbol(flor.arbol, 1);
        cout << endl;

        flor2.imprimirArbol(flor2.arbol, 1);
        cout << endl;

        flor3.imprimirArbol(flor3.arbol, 1);
        cout << endl;
        break;

    case 4: // Caso cola
        cola.asigcol();
        cola.mostrar(cola);

        cola2.asigcol();
        cola2.mostrar(cola2);

        cola3.asigcol();
        cola3.mostrar(cola3);
        break;

    case 5: // Caso pila
        pila.asigpil();
        pila.mostrar(pila);

        pila2.asigpil();
        pila2.mostrar(pila2);

        pila3.asigpil();
        pila3.mostrar(pila3);
        break;

    default:
        break;
    }
}

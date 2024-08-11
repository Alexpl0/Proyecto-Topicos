#include "Arbol.h"



void Arbol::insertarNodo(Nodo*& arbol, int numero)
{
    if (arbol == NULL)
    {
        Nodo* nuevo_nodo = crearNodo(numero);
        arbol = nuevo_nodo;
    }
    else
    {
        int valorRaiz = arbol->dato;
        if (numero < valorRaiz)
        {
            insertarNodo(arbol->izq, numero);

        }
        else
        {
            insertarNodo(arbol->der, numero);
        }
    }
}

void Arbol::mostrarArbol(Nodo* arbol)
{
    if (arbol == NULL)

    {
        return;
    }

    mostrarArbol(arbol->izq);
    cout << arbol->dato << ", ";
    mostrarArbol(arbol->der);
}

void Arbol::numarb()
{
    tree.asignum(tree.num);
    tree.valpunt(tree.num);
    tree.valreal(*tree.val);
}

void Arbol::imprimirArbol(Nodo* nodo, int nivel)
{
    {
        if (nodo == nullptr) {
            return;
        }

        // Imprimir espacios en blanco para indicar el nivel
        for (int i = 0; i < nivel; i++) {
            cout << "  ";
        }

        cout << nodo->dato << endl;

        // Recorrer el subárbol izquierdo
        imprimirArbol(nodo->izq, nivel + 1);

        // Recorrer el subárbol derecho
        imprimirArbol(nodo->der, nivel + 1);
    }
}

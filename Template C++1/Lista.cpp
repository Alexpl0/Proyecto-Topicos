#include "Lista.h"
#include <iostream>
#include "numal.h"
using namespace std;
Lista::Nodo* listn = NULL;

void Lista::insertarLista(Nodo*& listn, int n) // Inserta valores en orden
{
    // Creando Nueva Estrucutura Nodo

    Nodo* nuevo_nodo = new Nodo();
    nuevo_nodo->Dato = n;

    Nodo* aux1 = listn;
    Nodo* aux2=0;

    //Ordenamiento
//Se recorre el auxiliar hasta encontrar el lugar donde la posicion sea correcta de ingresar el nuevo nodo
    while ((aux1 != 0) and (aux1->Dato < n))
    {
        aux2 = aux1;
        aux1 = aux1->siguiente; //recorre el auxiliar
    }

    //Para el primer elemento de la lista
    if (listn == aux1)
    {
        listn = nuevo_nodo;
    }
    else
    {
        //Para los demas elementos de la lista
        aux2->siguiente = nuevo_nodo;
    }

    nuevo_nodo->siguiente = aux1;


}

void Lista::mostrarlista(Nodo* listn) // Muestra los valores de la lista
{
    Nodo* move = new Nodo();
    move = listn;
    while (move != NULL)
    {
        cout << move->Dato << " - ";
        move = move->siguiente;
    }
}

void Lista::buscar(Nodo* lista, int n) // Busca los valores de la lista por fuerza bruta
{
    int ver = 0;

    Nodo* aux1 = lista;

    //Se recorre el auxiliar hasta encontrar el lugar donde la posicion sea correcta de ingresar el nuevo nodo
    while ((aux1 != NULL))
    {
        if (aux1->Dato == n)
        {
            cout << "Se ha encontrado el valor:  " << n << endl;
            ver = 1;
        }

        aux1 = aux1->siguiente; //recorre el auxiliar
    }
    if (ver == 0)
    {
        cout << "No se ha encontrado el valor:  " << n << " dentro de la lista :c" << endl;
    }
}

void Lista::insertarLista2(Nodo2*& listn2, int* n)
{

    // Creando Nueva Estrucutura Nodo

    Nodo2* nuevo_nodo = new Nodo2();
    nuevo_nodo->Dato2 = n;
    cout << n << endl;

    Nodo2* aux1 = listn2;
    Nodo2* aux2 = 0;

    //Ordenamiento
//Se recorre el auxiliar hasta encontrar el lugar donde la posicion sea correcta de ingresar el nuevo nodo
    while ((aux1 != 0) and (aux1->Dato2 < n))
    {
        aux2 = aux1;
        aux1 = aux1->siguiente2; //recorre el auxiliar
    }

    //Para el primer elemento de la lista
    if (listn2 == aux1)
    {
        listn2 = nuevo_nodo;
    }
    else
    {
        //Para los demas elementos de la lista
        aux2->siguiente2 = nuevo_nodo;
    }

    nuevo_nodo->siguiente2 = aux1;


}

void Lista::mostrarlista2(Nodo2* listn2,int* Dato2)
{
    Nodo2* move = new Nodo2();
    move = listn2;
    while (move != NULL)
    {
        cout << move->Dato2 << " - ";
        move = move->siguiente2;
    }
}


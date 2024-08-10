#include "Lista.h"
#include "numal.h"
using namespace std;

void Lista::insertarLista(Nodo*&, int* n) // Inserta valores en orden
{
    // Creando Nueva Estrucutura Nodo

    Nodo* nuevo_nodo = new Nodo();
    nuevo_nodo->Dato = n;

    Nodo* aux1 = listn;
    Nodo* aux2;

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


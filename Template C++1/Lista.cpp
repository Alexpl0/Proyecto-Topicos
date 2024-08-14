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

void Lista::ordenburbuja(Nodo** listn){

    int intercambiado;
    Nodo* i, * j;
    for (i = *listn; i != nullptr; i = i->siguiente) {
        intercambiado = 0;
        for (j = *listn; j->siguiente != nullptr; j = j->siguiente) {
            if (j->Dato > j->siguiente->Dato) {
                swap(j->Dato, j->siguiente->Dato);
                intercambiado = 1;
            }
        }
        if (intercambiado == 0)
            break;
    }
}

void Lista::ordeninsercion(Nodo*& listn) {
    {
        if (listn == nullptr || listn->siguiente == nullptr) {
            return; // La lista está vacía o tiene solo un nodo
        }

        Nodo* ordenada = nullptr; // Nueva lista ordenada

        Nodo* actual = listn;
        while (actual != nullptr) {
            Nodo* siguiente = actual->siguiente;

            // Inserta el nodo en la lista ordenada
            if (ordenada == nullptr || ordenada->Dato >= actual->Dato) {
                actual->siguiente = ordenada;
                ordenada = actual;
            }
            else {
                Nodo* temp = ordenada;
                while (temp->siguiente != nullptr && temp->siguiente->Dato < actual->Dato) {
                    temp = temp->siguiente;
                }
                actual->siguiente = temp->siguiente;
                temp->siguiente = actual;
            }

            actual = siguiente;
        }


        listn = ordenada;
    }
}
Lista::Nodo* Lista::obtenerUltimoNodo(Nodo* listn)
{
    Nodo* temp = listn;
    while (temp != nullptr && temp->siguiente != nullptr) {
        temp = temp->siguiente;
    }
    return temp;
}
Lista::Nodo* Lista::particionar(Nodo* inicio, Nodo* fin, Nodo** nuevoInicio, Nodo** nuevoFin)
{
    if (inicio == nullptr || fin == nullptr) return nullptr;

    Nodo* pivote = fin;
    Nodo* anterior = nullptr;
    Nodo* actual = inicio;
    Nodo* cola = pivote;

    while (actual != pivote) {
        if (actual->Dato < pivote->Dato) {
            if (*nuevoInicio == nullptr) *nuevoInicio = actual;
            anterior = actual;
            actual = actual->siguiente;
        }
        else {
            if (anterior) anterior->siguiente = actual->siguiente;
            Nodo* temp = actual->siguiente;
            actual->siguiente = nullptr;
            cola->siguiente = actual;
            cola = actual;
            actual = temp;
        }
    }

    if (*nuevoInicio == nullptr) *nuevoInicio = pivote;
    *nuevoFin = cola;

    return pivote;

}
void Lista::quickSortRecursivo(Nodo*& inicio, Nodo* fin)
{
    if (inicio == nullptr || inicio == fin) return;

    Nodo* nuevoInicio = nullptr;
    Nodo* nuevoFin = nullptr;
    Nodo* pivote = particionar(inicio, fin, &nuevoInicio, &nuevoFin);

    if (nuevoInicio != pivote) {
        Nodo* temp = nuevoInicio;
        while (temp->siguiente != pivote) temp = temp->siguiente;
        temp->siguiente = nullptr;

        quickSortRecursivo(nuevoInicio, temp);

        temp = obtenerUltimoNodo(nuevoInicio);
        temp->siguiente = pivote;
    }

    quickSortRecursivo(pivote->siguiente, nuevoFin);

}
void Lista::quickSort(Nodo*& listn)
{
    Nodo* fin = obtenerUltimoNodo(listn);
    quickSortRecursivo(listn, fin);
}

void Lista::busquedafb(Nodo * lista, int n) // Busca los valores de la lista por fuerza bruta
{
    bool ver = 0;
    int busqresfb = 1;
    Nodo* aux1 = lista;

    //Se recorre el auxiliar hasta encontrar el lugar donde la posicion sea correcta de ingresar el nuevo nodo
    while ((aux1 != NULL) and (ver==0))
    {        
        if (aux1->Dato == n)
        {
            cout << "Se ha encontrado el valor:  " << n << endl;
            ver = 1;
            cout << "El numero de operaciones realizadas  por Fuerza Bruta fue: " << busqresfb << endl << endl;
        }

        aux1 = aux1->siguiente; //recorre el auxiliar
        busqresfb++;
    }
    if (ver == 0)
    {
        cout << "No se ha encontrado el valor:  " << n << " dentro de la lista :c" << endl;
        cout << "El numero de operaciones realizadas  por Fuerza Bruta fue: " << x << endl << endl;
    }
    
}

//-------------------------------------------------------------------------------
// PARA BUSQUEDA BINARIA
// Usamos el arreglo "valor[x]" creado por "Numal" donde obteniamos el arreglo de numeros que ingresariamos a la lista. 
// Ver: void numal::valpunt(int* num)
Lista lista;

void Lista::burbuja(int arreglo[], int x) { //arreglo[] sera valor[x], y x sera el tamano, o sea la variable X de numal
    int i, j, temp;
    bool huboIntercambio;

    for (i = 0; i < x - 1; i++) {
        huboIntercambio = false;
        for (j = 0; j < x - i - 1; j++) {
            if (arreglo[j] > arreglo[j + 1]) {
                // Intercambiar elementos
                temp = arreglo[j];
                arreglo[j] = arreglo[j + 1];
                arreglo[j + 1] = temp;
                huboIntercambio = true;
            }
        }

        // Si no hubo intercambios en una pasada, el arreglo ya está ordenado
        if (!huboIntercambio) {
            break;
        }
    }
}

bool Lista::binarySearch(int arr[], int left, int right, int b) // right sera la variable x declarada en Numal y left sera 0
{
    busqresbs = 0;
    while (left <= right) {

        busqresbs++;
        int mid = left + (right - left) / 2;
        cout << "Se ha encontrado el valor:  " << b << endl;
        cout << "El numero de operaciones realizadas  por Fuerza Bruta fue: " << busqresbs << endl << endl;
        // Si el elemento está en el medio, lo encontramos
        if (arr[mid] == x)

            return true;

        // Si el elemento es menor que mid, buscamos en la mitad izquierda
        if (arr[mid] < x)
            left = mid + 1;

        // Si el elemento es mayor que mid, buscamos en la mitad derecha
        else
            right = mid - 1;
    }

    // Si no lo encontramos, retornamos false
    cout << "No se ha encontrado el valor:  " << b << " dentro de la lista :c" << endl;
    cout << "El numero de operaciones realizadas  por Fuerza Bruta fue: " << busqresbs << endl << endl;
    return false;
}

//-------------------------------------------------------------------------------


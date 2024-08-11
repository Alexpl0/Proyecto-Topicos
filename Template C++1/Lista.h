#pragma once
#include "numal.h"
using namespace std;

class Lista
{
public:
	struct Nodo {
		int Dato;
		Nodo* siguiente;
	}; // Crea la estructura de un nodo de lista
	int busqres, busqres2, busqres3;
	numal i; // Llama a la clase para crear los 20 valores, asignarles valor, y quiza mostrarlos

	Nodo* listn=NULL; // Crea el puntero para usarlo en las funciones
	void insertarLista(Nodo*& listn, int i); // Funcion para insertar los valores -> Se requiere crear los valores primero
	void mostrarlista(Nodo* lista); // Muestra los valores en orden, en lista
	void ordenburbuja(Nodo** listn);
	void ordeninsercion(Nodo*& listn);
	//--------------------------------
		// Ordenamiento Rápido
		// Función para obtener el último nodo de la lista
		Nodo* obtenerUltimoNodo(Nodo* listn);

		// Función de partición para Quick Sort
		Nodo* particionar(Nodo* inicio, Nodo* fin, Nodo** nuevoInicio, Nodo** nuevoFin);

		// Función recursiva para Quick Sort
		void quickSortRecursivo(Nodo*& inicio, Nodo* fin);

		// Función para ordenar la lista usando Quick Sort
		void quickSort(Nodo*& listn);

	//--------------------------------
	void busquedafb(Nodo* lista, int n); // Busca un valor por fuerza bruta

};


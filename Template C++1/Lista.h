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
	//int busqresfb, busqresfb2, busqresfb3;
	int busqresbs;
	numal i; // Llama a la clase para crear los 20 valores, asignarles valor, y quiza mostrarlos

	Nodo* listn=NULL; // Crea el puntero para usarlo en las funciones
	

	void insertarLista(Nodo*& listn, int i); // Funcion para insertar los valores -> Se requiere crear los valores primero
	void mostrarlista(Nodo* lista); // Muestra los valores en orden, en lista
	void ordenburbuja(Nodo** listn);
	void ordeninsercion(Nodo*& listn);
	//--------------------------------
		// Ordenamiento R�pido
		// Funci�n para obtener el �ltimo nodo de la lista
		Nodo* obtenerUltimoNodo(Nodo* listn);

		// Funci�n de partici�n para Quick Sort
		Nodo* particionar(Nodo* inicio, Nodo* fin, Nodo** nuevoInicio, Nodo** nuevoFin);

		// Funci�n recursiva para Quick Sort
		void quickSortRecursivo(Nodo*& inicio, Nodo* fin);

		// Funci�n para ordenar la lista usando Quick Sort
		void quickSort(Nodo*& listn);

	//--------------------------------
	void busquedafb(Nodo* lista, int n); // Busca un valor por fuerza bruta

	void burbuja(int arreglo[], int n); // El arreglo sera la estructura creada por Numal, Valor[]; y n sera el valor X de numal
	bool binarySearch(int arr[], int left, int right,  int b); // right sera la variable x declarada en Numal y left sera 0
};


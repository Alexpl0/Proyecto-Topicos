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

	numal i; // Llama a la clase para crear los 20 valores, asignarles valor, y quiza mostrarlos

	Nodo* listn=NULL; // Crea el puntero para usarlo en las funciones
	void insertarLista(Nodo*& listn, int i); // Funcion para insertar los valores -> Se requiere crear los valores primero
	void mostrarlista(Nodo* lista); // Muestra los valores en orden, en lista
	void buscar(Nodo* lista, int n); // Busca un valor por fuerza bruta


	struct Nodo2 {
		int* Dato2;
		Nodo2* siguiente2;
	};
	Nodo2* listn2 = NULL;
	void insertarLista2(Nodo2*& listn, int* i); // Funcion para insertar los valores -> Se requiere crear los valores primero
	void mostrarlista2(Nodo2* lista, int* Dato2);
};


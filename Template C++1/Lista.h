#pragma once
#include "numal.h"
using namespace std;

class Lista
{
public:
	struct Nodo {
		int Dato;
		Nodo* siguiente;
	}; // Crea la estructura de lista

	numal i; // Llama a la clase para crear los 20 valores, asignarles valor, y quiza mostrarlos

	Nodo* listn; // Crea el puntero para usarlo en las funciones
	void insertarLista(Nodo*&, int* i); // Funcion para insertar los valores -> Se requiere crear los valores primero
	void mostrarlista(Nodo* lista); // Muestra los valores en orden, en lista
	void buscar(Nodo* lista, int n); // Busca un valor por fuerza bruta

};


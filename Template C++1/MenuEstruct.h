#pragma once
#include <iostream>
#include "Lista.h"
#include "Arreglo.h"
#include "Arbol.h"
#include "Cola.h"
#include "Pila.h"
using namespace std;

class MenuEstruct
{
public:
	Lista lista;
	Arreglo arreglo;
	Arbol flor;
	Cola cola;
	Pila pila;
	void Menu();
	int est1;
	int est2;
	void select(int estn);
	void stich(int est1, int est2);
};


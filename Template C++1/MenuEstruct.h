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
	Lista lista, lista2, lista3;
	Arreglo arreglo, arreglo2, arreglo3;
	Arbol flor, flor2, flor3;
	Cola cola, cola2, cola3;
	Pila pila, pila2, pila3;
	void Menu();
	int est1;
	int est2;
	int busq1;
	int busq2;
	void select(int estn);
	void stich(int est1, int est2);
};


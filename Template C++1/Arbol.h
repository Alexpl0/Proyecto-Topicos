#pragma once
#include "numal.h"
#include <iostream>
using namespace std;

class Arbol
{
public:
    numal tree;
    struct Nodo
    {
        int dato;
        Nodo* der;
        Nodo* izq;
    };

    Nodo* arbol = NULL;
    int busqres, busqres2, busqres3;

    Nodo* crearNodo(int numero) {

        Nodo* nuevo_nodo = new Nodo();

        nuevo_nodo->dato = numero;
        nuevo_nodo->der = NULL;
        nuevo_nodo->izq = NULL;

        return nuevo_nodo;
    };

    void insertarNodo(Nodo*& arbol, int num);
    void mostrarArbol(Nodo* arbol);
    void numarb(); // Creamos el arreglo de numeros para ingresar en el arbol
    void imprimirArbol(Nodo* nodo, int nivel);
};

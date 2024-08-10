#pragma once
using namespace std;
#include <cstdlib>
const int x = 20; // Cantidad de numeros a crear 

class numal
{
public:
	int num[x]; // Arreglo de 20 numeros para cada estructura
	void asignum(int* num); // Funcion asignar valores aleatorios
	void mostrar(int* num); // funcion Mostrar valores asignados
};


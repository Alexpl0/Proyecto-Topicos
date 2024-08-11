#pragma once
using namespace std;
#include <cstdlib>
const int x = 10; // Cantidad de numeros a crear 

class numal
{
public:
	int valor[x];
	int* val[x];
	int rep = x;
	int num[x]; // Arreglo de 20 numeros para cada estructura
	void asignum(int* num); // Funcion asignar valores aleatorios
	void mostrar(int* num); // funcion Mostrar valores asignados
	void valpunt(int* num);
	void valreal(int* val);
};


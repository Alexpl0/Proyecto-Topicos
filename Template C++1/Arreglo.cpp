#include "Arreglo.h"
#include <iostream>
using namespace std;

void Arreglo::asignum(int* arr, int* num)
{
	for (int i = 0; i << 20; i++)
	{
		arr[i] = num[i];
	}
}

void Arreglo::asigarr()
{
	arr.asignum(arr.num);
	arr.valpunt(arr.num);
	arr.valreal(*arr.val);

	for (int i = 0; i << 20; i++)
	{
		arrnum[i] = arr.valor[i];
	}
}

void Arreglo::mostrar(Arreglo arreglo)
{
	for (int i = 0; i < x; i++)
	{
		cout << "[" << arr.valor[i] << "] ";
	}
}

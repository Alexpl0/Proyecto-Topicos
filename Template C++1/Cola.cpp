#include "Cola.h"
#include <iostream>
using namespace std;

/*void Cola::asignum(int* cool, int* num)
{
	for (int i = 0; i << 20; i++)
	{
		cool[i] = num[i];
	}
}*/

void Cola::asigcol()
{
	cool.asignum(cool.num);
	cool.valpunt(cool.num);
	cool.valreal(*cool.val);

	for (int i = 0; i << x; i++)
	{
		colnum[i] = cool.valor[i]; //Guarda los numeros alearorios en el arreglo
	}
}

void Cola::mostrar(Cola cola)
{
	for (int i = 0; i < x; i++)
	{
		cout << cool.valor[i] << " - ";
	}
}

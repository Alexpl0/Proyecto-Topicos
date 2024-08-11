#include "Pila.h"

void Pila::asigpil()
{
	pil.asignum(pil.num);
	pil.valpunt(pil.num);
	pil.valreal(*pil.val);

	for (int i = 0; i << x; i++)
	{
		pilnum[i] = pil.valor[i]; //Guarda los numeros alearorios en la pila
	}
}

void Pila::mostrar(Pila pila)
{
	for (int i = 0; i < x; i++)
	{
		cout << " | " << pil.valor[i] << " | " << endl;
		cout << "--------- " << endl;
	}
}

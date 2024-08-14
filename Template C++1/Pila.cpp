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

void Pila::burbuja(int arreglo[], int n) //arreglo[] sera valor[x], y x sera el tamano, o sea la variable X de numal
{
    int i, j, temp;
    bool huboIntercambio;

    for (i = 0; i < x - 1; i++) {
        huboIntercambio = false;
        for (j = 0; j < x - i - 1; j++) {
            if (arreglo[j] > arreglo[j + 1]) {
                // Intercambiar elementos
                temp = arreglo[j];
                arreglo[j] = arreglo[j + 1];
                arreglo[j + 1] = temp;
                huboIntercambio = true;
            }
        }

        // Si no hubo intercambios en una pasada, el arreglo ya está ordenado
        if (!huboIntercambio) {
            break;
        }
    }
}

bool Pila::binarySearch(int arr[], int left, int right, int b)
{
    while (left <= right) {
        int mid = left + (right - left) / 2;

        // Si el elemento está en el medio, lo encontramos
        if (arr[mid] == x)
            return true;

        // Si el elemento es menor que mid, buscamos en la mitad izquierda
        if (arr[mid] < x)
            left = mid + 1;

        // Si el elemento es mayor que mid, buscamos en la mitad derecha
        else
            right = mid - 1;
    }

    // Si no lo encontramos, retornamos false
    return false;
}
